/*
 * SPDX-License-Identifier: Apache-2.0
 */

#include <zephyr/kernel.h>

int main(void)
{
	while (1) {
		k_sleep(K_MSEC(1000));
	}
}
