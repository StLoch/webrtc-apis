// Generated by zsLibEventingTool

#include "impl_org_webRtc_WebRtcFactoryConfiguration.h"

using ::zsLib::String;
using ::zsLib::Optional;
using ::zsLib::Any;
using ::zsLib::AnyPtr;
using ::zsLib::AnyHolder;
using ::zsLib::Promise;
using ::zsLib::PromisePtr;
using ::zsLib::PromiseWithHolder;
using ::zsLib::PromiseWithHolderPtr;
using ::zsLib::eventing::SecureByteBlock;
using ::zsLib::eventing::SecureByteBlockPtr;
using ::std::shared_ptr;
using ::std::weak_ptr;
using ::std::make_shared;
using ::std::list;
using ::std::set;
using ::std::map;

// borrow definitions from class
ZS_DECLARE_TYPEDEF_PTR(wrapper::impl::org::webRtc::WebRtcFactoryConfiguration::WrapperImplType, WrapperImplType);
ZS_DECLARE_TYPEDEF_PTR(WrapperImplType::WrapperType, WrapperType);

//------------------------------------------------------------------------------
wrapper::impl::org::webRtc::WebRtcFactoryConfiguration::WebRtcFactoryConfiguration() noexcept
{
}

//------------------------------------------------------------------------------
wrapper::org::webRtc::WebRtcFactoryConfigurationPtr wrapper::org::webRtc::WebRtcFactoryConfiguration::wrapper_create() noexcept
{
  auto pThis = make_shared<wrapper::impl::org::webRtc::WebRtcFactoryConfiguration>();
  pThis->thisWeak_ = pThis;
  return pThis;
}

//------------------------------------------------------------------------------
wrapper::impl::org::webRtc::WebRtcFactoryConfiguration::~WebRtcFactoryConfiguration() noexcept
{
  thisWeak_.reset();
}

//------------------------------------------------------------------------------
void wrapper::impl::org::webRtc::WebRtcFactoryConfiguration::wrapper_init_org_webRtc_WebRtcFactoryConfiguration() noexcept
{
}

//------------------------------------------------------------------------------
WrapperImplTypePtr WrapperImplType::clone(WrapperTypePtr wrapper) noexcept
{
  if (!wrapper)
    return {};

  auto converted = ZS_DYNAMIC_PTR_CAST(WrapperImplType, wrapper);
  if (!converted)
    return {};

  auto result = std::make_shared<WrapperImplType>();
  result->audioCapturingEnabled = converted->audioCapturingEnabled;
  result->audioRenderingEnabled = converted->audioRenderingEnabled;
  result->enableAudioBufferEvents = converted->enableAudioBufferEvents;
  return result;
}

