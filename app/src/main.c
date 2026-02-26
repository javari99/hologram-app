/*
 * SPDX-License-Identifier: Apache-2.0
 */

#include <zephyr/kernel.h>
#include <zephyr/logging/log.h>

LOG_MODULE_REGISTER(main, LOG_LEVEL_INF);

int main(void)
{
	while (1) {
		LOG_INF("Hello world!");
		k_sleep(K_MSEC(1000));
	}
}
