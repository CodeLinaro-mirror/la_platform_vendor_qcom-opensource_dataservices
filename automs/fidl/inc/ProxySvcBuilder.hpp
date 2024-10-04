/*
* Copyright (c) 2024 Qualcomm Innovation Center, Inc. All rights reserved.
* SPDX-License-Identifier: BSD-3-Clause-Clear
*/

#ifndef _PROXY_SVC_BUILDER_HPP_
#define _PROXY_SVC_BUILDER_HPP_

#include <CommonAPI/CommonAPI.hpp>
#include <v0/com/qualcomm/qti/modem/InfoSvcProxy.hpp>
#include <v0/com/qualcomm/qti/modem/RadioSvcProxy.hpp>
#include <v0/com/qualcomm/qti/modem/SimSvcProxy.hpp>
#include <v0/com/qualcomm/qti/modem/MngdConnSvcProxy.hpp>

class ProxySvcBuilder {
   public:
    static void init();
    static std::shared_ptr<v0::com::qualcomm::qti::modem::SimSvcProxy<>> getSimSvcProxy();
    static std::shared_ptr<v0::com::qualcomm::qti::modem::RadioSvcProxy<>> getRadioSvcProxy();
    static std::shared_ptr<v0::com::qualcomm::qti::modem::InfoSvcProxy<>> getInfoSvcProxy();
    static std::shared_ptr<v0::com::qualcomm::qti::modem::MngdConnSvcProxy<>> getMngdConnProxy();
};

#endif  // _PROXY_SVC_BUILDER_HPP_