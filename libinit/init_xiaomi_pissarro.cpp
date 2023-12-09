/*
 * Copyright (C) 2021-2022 The LineageOS Project
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <libinit_variant.h>
#include <libinit_utils.h>

#include "vendor_init.h"

static const variant_info_t pissarroin_info = {
    .hwc_value = "",
    .sku_value = "pissarroin",

    .brand = "Xiaomi",
    .device = "pissarroin",
    .model = "Xiaomi 11i",
    .build_fingerprint = "Xiaomi/pissarroin/pissarroin:12/SP1A.210812.016/V14.0.7.0.TKTMIXM:user/release-keys",
};

static const variant_info_t pissarroinpro_info = {
    .hwc_value = "",
    .sku_value = "pissarroinpro",

    .brand = "Xiaomi",
    .device = "pissarroinpro",
    .model = "Xiaomi 11i HyperCharge",
    .build_fingerprint = "Xiaomi/pissarroinpro/pissarroinpro:12/SP1A.210812.016/V14.0.7.0.TKTMIXM:user/release-keys",
};

static const variant_info_t pissarro_info = {
    .hwc_value = "",
    .sku_value = "pissarro",

    .brand = "Redmi",
    .device = "pissarro",
    .model = "Redmi Note 11 Pro",
    .build_fingerprint = "Redmi/pissarro/pissarro:12/SP1A.210812.016/V14.0.7.0.TKTMIXM:user/release-keys",
};

static const variant_info_t pissarroprocn_info = {
    .hwc_value = "",
    .sku_value = "pissarropro",

    .brand = "Redmi",
    .device = "pissarropro",
    .model = "Redmi Note 11 Pro+",
    .build_fingerprint = "Redmi/pissarropro/pissarropro:12/SP1A.210812.016/V14.0.7.0.TKTMIXM:user/release-keys",
};

static const variant_info_t pissarroprods_info = {
    .hwc_value = "",
    .sku_value = "pissarropro_ds",

    .brand = "Redmi",
    .device = "pissarropro",
    .model = "Redmi Note 11 Pro+ 5G",
    .build_fingerprint = "Redmi/pissarropro_global/pissarropro:12/SP1A.210812.016/V14.0.7.0.TKTMIXM:user/release-keys",
};

static const variant_info_t pissarropross_info = {
    .hwc_value = "",
    .sku_value = "pissarropro_ss",

    .brand = "Redmi",
    .device = "pissarropro",
    .model = "Redmi Note 11 Pro+ 5G",
    .build_fingerprint = "Redmi/pissarropro_global/pissarropro:12/SP1A.210812.016/V14.0.7.0.TKTMIXM:user/release-keys",
};

static const std::vector<variant_info_t> variants = {
    pissarroin_info,
    pissarroinpro_info,
    pissarro_info,
    pissarroprocn_info,
    pissarroprods_info,
    pissarropross_info,
};

void vendor_load_properties() {
    search_variant(variants);
}
