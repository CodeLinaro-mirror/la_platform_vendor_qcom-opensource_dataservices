/*
* Copyright (c) 2024 Qualcomm Innovation Center, Inc. All rights reserved.
* SPDX-License-Identifier: BSD-3-Clause-Clear
*/

#include <ProxySvcBuilder.hpp>
#include <chrono>
#include <thread>

using namespace v0::com::qualcomm::qti::modem;

void ProxySvcBuilder::init() {
    // commonapi proxy init
    CommonAPI::Runtime::setProperty("LogContext", "E01C");
    CommonAPI::Runtime::setProperty("LogApplication", "E01C");
    CommonAPI::Runtime::setProperty("LibraryBase", "TelephonyInterface");
}

std::shared_ptr<SimSvcProxy<>> ProxySvcBuilder::getSimSvcProxy() {
    auto simProxy = CommonAPI::Runtime::get()->buildProxy<SimSvcProxy>("local", "modem.SimSvc",
                                                                       "SimSvcTest");
    return simProxy;
}

std::shared_ptr<RadioSvcProxy<>> ProxySvcBuilder::getRadioSvcProxy() {
    auto radioProxy = CommonAPI::Runtime::get()->buildProxy<RadioSvcProxy>(
            "local", "modem.RadioSvc", "radioSvcTest");
    return radioProxy;
}

std::shared_ptr<InfoSvcProxy<>> ProxySvcBuilder::getInfoSvcProxy() {
    auto infoProxy = CommonAPI::Runtime::get()->buildProxy<InfoSvcProxy>("local", "modem.InfoSvc",
                                                                         "InfoSvcTest");
    return infoProxy;
}

std::shared_ptr<MngdConnSvcProxy<>> ProxySvcBuilder::getMngdConnProxy() {
    auto mngdProxy = CommonAPI::Runtime::get()->buildProxy<MngdConnSvcProxy>(
            "local", "modem.MngdConnSvc", "MngdConnSvcTest");
    return mngdProxy;
}
