import PIL.Image
import os

def image_to_c_array(file_path, var_name):
    img = PIL.Image.open(file_path).convert('RGB')
    width, height = img.size
    
    pixel_data = []
    for y in range(height):
        for x in range(width):
            r, g, b = img.getpixel((x, y))
            color = ((r & 0xF8) << 8) | ((g & 0xFC) << 3) | (b >> 3)  # RGB565 format
            pixel_data.append(color)

    c_array = f"const uint16_t {var_name}[] = {{\n"
    c_array += "    "
    for i, pixel in enumerate(pixel_data):
        c_array += f"0x{pixel:04X}, "
        if (i + 1) % 16 == 0:
            c_array += "\n    "
    c_array = c_array.rstrip(", \n") + "\n};\n\n"
    
    c_array += f"const lv_img_dsc_t {var_name}_dsc = {{\n"
    c_array += f"    .header.cf = LV_IMG_CF_TRUE_COLOR,\n"
    c_array += f"    .header.always_zero = 0,\n"
    c_array += f"    .header.reserved = 0,\n"
    c_array += f"    .header.w = {width},\n"
    c_array += f"    .header.h = {height},\n"
    c_array += f"    .data_size = {len(pixel_data) * 2},\n"
    c_array += f"    .data = {var_name}\n"
    c_array += "};"

    return c_array

# 사용 예
file_path = 'path/to/your/image.png'
var_name = 'my_image'
c_array = image_to_c_array(file_path, var_name)

with open('image_data.c', 'w') as f:
    f.write(c_array)

print("C 배열이 image_data.c 파일로 저장되었습니다.")