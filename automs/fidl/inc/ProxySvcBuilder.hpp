/*
* Copyright (c) 2024 Qualcomm Innovation Center, Inc. All rights reserved.
* SPDX-License-Identifier: BSD-3-Clause-Clear
*/

#ifndef _PROXY_SVC_BUILDER_HPP_
#define _PROXY_SVC_BUILDER_HPP_

#include <CommonAPI/CommonAPI.hpp>
#include <InfoSvc/v1/com/qualcomm/qti/telephony/InfoSvcProxy.hpp>
#include <SimSvc/v1/com/qualcomm/qti/telephony/SimSvcProxy.hpp>
#include <MngdConnSvc/v2/com/qualcomm/qti/telephony/MngdConnSvcProxy.hpp>
#include <RadioSvc/v2/com/qualcomm/qti/telephony/RadioSvcProxy.hpp>

namespace RadioSvc = v2::com::qualcomm::qti::telephony;
namespace SimSvc = v1::com::qualcomm::qti::telephony;
namespace InfoSvc = v1::com::qualcomm::qti::telephony;
namespace MngdConnSvc = v2::com::qualcomm::qti::telephony;
using RadioSvcTypes = RadioSvc::RadioSvcTypes;
using SimSvcTypes = SimSvc::SimSvcTypes;
using InfoSvcTypes = InfoSvc::InfoSvcTypes;
using MngdConnSvcTypes = MngdConnSvc::MngdConnSvcTypes;


class ProxySvcBuilder {
   public:
    static void init();
    static std::shared_ptr<SimSvc::SimSvcProxy<>> getSimSvcProxy();
    static std::shared_ptr<RadioSvc::RadioSvcProxy<>> getRadioSvcProxy();
    static std::shared_ptr<InfoSvc::InfoSvcProxy<>> getInfoSvcProxy();
    static std::shared_ptr<MngdConnSvc::MngdConnSvcProxy<>> getMngdConnProxy();
};

#endif  // _PROXY_SVC_BUILDER_HPP_