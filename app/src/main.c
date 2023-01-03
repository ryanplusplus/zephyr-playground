/*
 * Copyright (c) 2021 Nordic Semiconductor ASA
 * SPDX-License-Identifier: Apache-2.0
 */

#include <zephyr/kernel.h>
#include "app_version.h"
#include <zephyr/logging/log.h>

LOG_MODULE_REGISTER(main, CONFIG_APP_LOG_LEVEL);

void main(void)
{
  printk("Zephyr Example Application %s\n", APP_VERSION_STR);

  while(1) {
    k_sleep(K_MSEC(1000));
  }
}
