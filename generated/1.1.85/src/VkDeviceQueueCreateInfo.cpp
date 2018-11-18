/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.5
 */
#include "utils.h"
#include "index.h"
#include "VkDeviceQueueCreateInfo.h"

Nan::Persistent<v8::FunctionTemplate> _VkDeviceQueueCreateInfo::constructor;

_VkDeviceQueueCreateInfo::_VkDeviceQueueCreateInfo() {
  instance.sType = VK_STRUCTURE_TYPE_DEVICE_QUEUE_CREATE_INFO;
}

_VkDeviceQueueCreateInfo::~_VkDeviceQueueCreateInfo() {
  //printf("VkDeviceQueueCreateInfo deconstructed!!\n");
}

void _VkDeviceQueueCreateInfo::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkDeviceQueueCreateInfo::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkDeviceQueueCreateInfo").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, SetsType, ctor);
  SetPrototypeAccessor(proto, Nan::New("pNext").ToLocalChecked(), GetpNext, SetpNext, ctor);
  SetPrototypeAccessor(proto, Nan::New("flags").ToLocalChecked(), Getflags, Setflags, ctor);
  SetPrototypeAccessor(proto, Nan::New("queueFamilyIndex").ToLocalChecked(), GetqueueFamilyIndex, SetqueueFamilyIndex, ctor);
  SetPrototypeAccessor(proto, Nan::New("queueCount").ToLocalChecked(), GetqueueCount, SetqueueCount, ctor);
  SetPrototypeAccessor(proto, Nan::New("pQueuePriorities").ToLocalChecked(), GetpQueuePriorities, SetpQueuePriorities, ctor);
  Nan::Set(target, Nan::New("VkDeviceQueueCreateInfo").ToLocalChecked(), ctor->GetFunction());
}

NAN_METHOD(_VkDeviceQueueCreateInfo::New) {
  if (info.IsConstructCall()) {
    _VkDeviceQueueCreateInfo* self = new _VkDeviceQueueCreateInfo();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      v8::Local<v8::String> sAccess0 = Nan::New("sType").ToLocalChecked();
      v8::Local<v8::String> sAccess1 = Nan::New("pNext").ToLocalChecked();
      v8::Local<v8::String> sAccess2 = Nan::New("flags").ToLocalChecked();
      v8::Local<v8::String> sAccess3 = Nan::New("queueFamilyIndex").ToLocalChecked();
      v8::Local<v8::String> sAccess4 = Nan::New("queueCount").ToLocalChecked();
      v8::Local<v8::String> sAccess5 = Nan::New("pQueuePriorities").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess1)) info.This()->Set(sAccess1, obj->Get(sAccess1));
      if (obj->Has(sAccess2)) info.This()->Set(sAccess2, obj->Get(sAccess2));
      if (obj->Has(sAccess3)) info.This()->Set(sAccess3, obj->Get(sAccess3));
      if (obj->Has(sAccess4)) info.This()->Set(sAccess4, obj->Get(sAccess4));
      if (obj->Has(sAccess5)) info.This()->Set(sAccess5, obj->Get(sAccess5));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkDeviceQueueCreateInfo constructor cannot be invoked without 'new'");
  }
};

// sType
NAN_GETTER(_VkDeviceQueueCreateInfo::GetsType) {
  _VkDeviceQueueCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkDeviceQueueCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}NAN_SETTER(_VkDeviceQueueCreateInfo::SetsType) {
  _VkDeviceQueueCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkDeviceQueueCreateInfo>(info.This());
  self->instance.sType = static_cast<VkStructureType>(Nan::To<int32_t>(value).FromMaybe(0));
}// pNext
NAN_GETTER(_VkDeviceQueueCreateInfo::GetpNext) {
  _VkDeviceQueueCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkDeviceQueueCreateInfo>(info.This());
}NAN_SETTER(_VkDeviceQueueCreateInfo::SetpNext) {
  _VkDeviceQueueCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkDeviceQueueCreateInfo>(info.This());
}// flags
NAN_GETTER(_VkDeviceQueueCreateInfo::Getflags) {
  _VkDeviceQueueCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkDeviceQueueCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.flags));
}NAN_SETTER(_VkDeviceQueueCreateInfo::Setflags) {
  _VkDeviceQueueCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkDeviceQueueCreateInfo>(info.This());
  self->instance.flags = static_cast<VkDeviceQueueCreateFlags>(Nan::To<int32_t>(value).FromMaybe(0));
}// queueFamilyIndex
NAN_GETTER(_VkDeviceQueueCreateInfo::GetqueueFamilyIndex) {
  _VkDeviceQueueCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkDeviceQueueCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.queueFamilyIndex));
}NAN_SETTER(_VkDeviceQueueCreateInfo::SetqueueFamilyIndex) {
  _VkDeviceQueueCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkDeviceQueueCreateInfo>(info.This());
  self->instance.queueFamilyIndex = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
}// queueCount
NAN_GETTER(_VkDeviceQueueCreateInfo::GetqueueCount) {
  _VkDeviceQueueCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkDeviceQueueCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.queueCount));
}NAN_SETTER(_VkDeviceQueueCreateInfo::SetqueueCount) {
  _VkDeviceQueueCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkDeviceQueueCreateInfo>(info.This());
  self->instance.queueCount = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
}// pQueuePriorities
NAN_GETTER(_VkDeviceQueueCreateInfo::GetpQueuePriorities) {
  _VkDeviceQueueCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkDeviceQueueCreateInfo>(info.This());
  if (self->pQueuePriorities.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->pQueuePriorities);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkDeviceQueueCreateInfo::SetpQueuePriorities) {
  _VkDeviceQueueCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkDeviceQueueCreateInfo>(info.This());
  
    // js
    if (value->IsArray() || value->IsArrayBufferView()) {
      v8::Handle<v8::Array> arr = v8::Handle<v8::Array>::Cast(value);
      Nan::Persistent<v8::Array, v8::CopyablePersistentTraits<v8::Array>> obj(arr);
      self->pQueuePriorities = obj;
    } else {
      if (!self->pQueuePriorities.IsEmpty()) self->pQueuePriorities.Empty();
    }
  
  
  // vulkan
  if (value->IsArrayBufferView()) {
    self->instance.pQueuePriorities = getTypedArrayData<float>(Nan::To<v8::Object>(value).ToLocalChecked(), nullptr);
  } else {
    self->instance.pQueuePriorities = nullptr;
  }
}