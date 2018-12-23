/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.1.0
 */
#include "utils.h"
#include "index.h"
#include "VkPhysicalDeviceExternalMemoryHostPropertiesEXT.h"

Nan::Persistent<v8::FunctionTemplate> _VkPhysicalDeviceExternalMemoryHostPropertiesEXT::constructor;

_VkPhysicalDeviceExternalMemoryHostPropertiesEXT::_VkPhysicalDeviceExternalMemoryHostPropertiesEXT() {
  instance.sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_MEMORY_HOST_PROPERTIES_EXT;
  
}

_VkPhysicalDeviceExternalMemoryHostPropertiesEXT::~_VkPhysicalDeviceExternalMemoryHostPropertiesEXT() {
  //printf("VkPhysicalDeviceExternalMemoryHostPropertiesEXT deconstructed!!\n");
  
  
  
}

void _VkPhysicalDeviceExternalMemoryHostPropertiesEXT::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkPhysicalDeviceExternalMemoryHostPropertiesEXT::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkPhysicalDeviceExternalMemoryHostPropertiesEXT").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, SetsType, ctor);
  SetPrototypeAccessor(proto, Nan::New("minImportedHostPointerAlignment").ToLocalChecked(), GetminImportedHostPointerAlignment, SetminImportedHostPointerAlignment, ctor);
  Nan::Set(target, Nan::New("VkPhysicalDeviceExternalMemoryHostPropertiesEXT").ToLocalChecked(), ctor->GetFunction());
}

bool _VkPhysicalDeviceExternalMemoryHostPropertiesEXT::flush() {
  _VkPhysicalDeviceExternalMemoryHostPropertiesEXT *self = this;
  
  return true;
}

NAN_METHOD(_VkPhysicalDeviceExternalMemoryHostPropertiesEXT::New) {
  if (info.IsConstructCall()) {
    _VkPhysicalDeviceExternalMemoryHostPropertiesEXT* self = new _VkPhysicalDeviceExternalMemoryHostPropertiesEXT();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      v8::Local<v8::String> sAccess0 = Nan::New("sType").ToLocalChecked();
      v8::Local<v8::String> sAccess2 = Nan::New("minImportedHostPointerAlignment").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess2)) info.This()->Set(sAccess2, obj->Get(sAccess2));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkPhysicalDeviceExternalMemoryHostPropertiesEXT constructor cannot be invoked without 'new'");
  }
};

// sType
NAN_GETTER(_VkPhysicalDeviceExternalMemoryHostPropertiesEXT::GetsType) {
  _VkPhysicalDeviceExternalMemoryHostPropertiesEXT *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceExternalMemoryHostPropertiesEXT>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}NAN_SETTER(_VkPhysicalDeviceExternalMemoryHostPropertiesEXT::SetsType) {
  _VkPhysicalDeviceExternalMemoryHostPropertiesEXT *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceExternalMemoryHostPropertiesEXT>(info.This());
  if (value->IsNumber()) {
    self->instance.sType = static_cast<VkStructureType>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkPhysicalDeviceExternalMemoryHostPropertiesEXT.sType' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// minImportedHostPointerAlignment
NAN_GETTER(_VkPhysicalDeviceExternalMemoryHostPropertiesEXT::GetminImportedHostPointerAlignment) {
  _VkPhysicalDeviceExternalMemoryHostPropertiesEXT *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceExternalMemoryHostPropertiesEXT>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.minImportedHostPointerAlignment));
}NAN_SETTER(_VkPhysicalDeviceExternalMemoryHostPropertiesEXT::SetminImportedHostPointerAlignment) {
  _VkPhysicalDeviceExternalMemoryHostPropertiesEXT *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceExternalMemoryHostPropertiesEXT>(info.This());
  if (value->IsNumber()) {
    self->instance.minImportedHostPointerAlignment = static_cast<uint64_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkPhysicalDeviceExternalMemoryHostPropertiesEXT.minImportedHostPointerAlignment' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}