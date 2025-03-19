/*
 * Copyright (c) 2024 Qualcomm Innovation Center, Inc. All rights reserved.
 * SPDX-License-Identifier: BSD-3-Clause-Clear
 */

#include <ProxySvcBuilder.hpp>
#include <chrono>
#include <thread>

void ProxySvcBuilder::init() {
    // commonapi proxy init
    CommonAPI::Runtime::setProperty("LogContext", "E01C");
    CommonAPI::Runtime::setProperty("LogApplication", "E01C");
    CommonAPI::Runtime::setProperty("LibraryBase", "TelephonyInterface");
}

std::shared_ptr<SimSvc::SimSvcProxy<>> ProxySvcBuilder::getSimSvcProxy() {
    std::shared_ptr<SimSvc::SimSvcProxy<>> simProxy =
            CommonAPI::Runtime::get()->buildProxy<SimSvc::SimSvcProxy>("local", "telephony.SimSvc",
                                                                       "SimSvcTest");
    return simProxy;
}

std::shared_ptr<RadioSvc::RadioSvcProxy<>> ProxySvcBuilder::getRadioSvcProxy() {
    std::shared_ptr<RadioSvc::RadioSvcProxy<>> radioProxy =
            CommonAPI::Runtime::get()->buildProxy<RadioSvc::RadioSvcProxy>(
                    "local", "telephony.RadioSvc", "radioSvcTest");
    return radioProxy;
}

std::shared_ptr<InfoSvc::InfoSvcProxy<>> ProxySvcBuilder::getInfoSvcProxy() {
    std::shared_ptr<InfoSvc::InfoSvcProxy<>> infoProxy =
            CommonAPI::Runtime::get()->buildProxy<InfoSvc::InfoSvcProxy>("local", "telephony.InfoSvc",
                                                                         "InfoSvcTest");
    return infoProxy;
}

std::shared_ptr<MngdConnSvc::MngdConnSvcProxy<>> ProxySvcBuilder::getMngdConnProxy() {
    std::shared_ptr<MngdConnSvc::MngdConnSvcProxy<>> mngdProxy =
            CommonAPI::Runtime::get()->buildProxy<MngdConnSvc::MngdConnSvcProxy>(
                    "local", "telephony.MngdConnSvc", "MngdConnSvcTest");
    return mngdProxy;
}
