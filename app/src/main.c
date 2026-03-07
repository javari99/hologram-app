/*
 * SPDX-License-Identifier: Apache-2.0
 */

#include <zephyr/kernel.h>
#include <zephyr/device.h>
#include <zephyr/drivers/display.h>
#include <lvgl.h>

#include <zephyr/logging/log.h>

LOG_MODULE_REGISTER(main, LOG_LEVEL_INF);

int main(void)
{
	lv_obj_t *label = lv_label_create(lv_scr_act());
    	lv_label_set_text(label, "Hello World!");
    	lv_obj_align(label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_bg_color(lv_scr_act(), lv_color_hex(0xFF0000), LV_PART_MAIN);
	lv_obj_set_style_bg_opa(lv_scr_act(), LV_OPA_COVER, LV_PART_MAIN);
	lv_refr_now(NULL);

	while (1) {
		//LOG_INF("Alive");
		lv_task_handler();
		k_sleep(K_MSEC(10));
	}
	return 0;
}

// int main(void)
// {
//     const struct device *display = DEVICE_DT_GET(DT_CHOSEN(zephyr_display));

//     if (!device_is_ready(display)) {
//         printk("Display not ready!\n");
//         return 0;
//     }

//     printk("Display ready!\n");

//     /* Fill screen with red */
//     struct display_buffer_descriptor desc = {
//         .buf_size = 128 * 128 * 2,
//         .width = 128,
//         .height = 128,
//         .pitch = 128,
//     };

//     uint8_t buf[128 * 128 * 2];
//     memset(buf, 0xFF, sizeof(buf)); /* white in RGB565 */

//     display_write(display, 0, 0, &desc, buf);

//     printk("Frame written!\n");

//     while (1) {
//         k_sleep(K_MSEC(1000));
//     }
// }
