/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.5
 */
#include "utils.h"
#include "index.h"
#include "VkImageSubresource.h"

Nan::Persistent<v8::FunctionTemplate> _VkImageSubresource::constructor;

_VkImageSubresource::_VkImageSubresource() {
  
}

_VkImageSubresource::~_VkImageSubresource() {
  //printf("VkImageSubresource deconstructed!!\n");
}

void _VkImageSubresource::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkImageSubresource::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkImageSubresource").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("aspectMask").ToLocalChecked(), GetaspectMask, SetaspectMask, ctor);
  SetPrototypeAccessor(proto, Nan::New("mipLevel").ToLocalChecked(), GetmipLevel, SetmipLevel, ctor);
  SetPrototypeAccessor(proto, Nan::New("arrayLayer").ToLocalChecked(), GetarrayLayer, SetarrayLayer, ctor);
  Nan::Set(target, Nan::New("VkImageSubresource").ToLocalChecked(), ctor->GetFunction());
}

NAN_METHOD(_VkImageSubresource::New) {
  if (info.IsConstructCall()) {
    _VkImageSubresource* self = new _VkImageSubresource();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      v8::Local<v8::String> sAccess0 = Nan::New("aspectMask").ToLocalChecked();
      v8::Local<v8::String> sAccess1 = Nan::New("mipLevel").ToLocalChecked();
      v8::Local<v8::String> sAccess2 = Nan::New("arrayLayer").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess1)) info.This()->Set(sAccess1, obj->Get(sAccess1));
      if (obj->Has(sAccess2)) info.This()->Set(sAccess2, obj->Get(sAccess2));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkImageSubresource constructor cannot be invoked without 'new'");
  }
};

// aspectMask
NAN_GETTER(_VkImageSubresource::GetaspectMask) {
  _VkImageSubresource *self = Nan::ObjectWrap::Unwrap<_VkImageSubresource>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.aspectMask));
}NAN_SETTER(_VkImageSubresource::SetaspectMask) {
  _VkImageSubresource *self = Nan::ObjectWrap::Unwrap<_VkImageSubresource>(info.This());
  self->instance.aspectMask = static_cast<VkImageAspectFlags>(Nan::To<int32_t>(value).FromMaybe(0));
}// mipLevel
NAN_GETTER(_VkImageSubresource::GetmipLevel) {
  _VkImageSubresource *self = Nan::ObjectWrap::Unwrap<_VkImageSubresource>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.mipLevel));
}NAN_SETTER(_VkImageSubresource::SetmipLevel) {
  _VkImageSubresource *self = Nan::ObjectWrap::Unwrap<_VkImageSubresource>(info.This());
  self->instance.mipLevel = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
}// arrayLayer
NAN_GETTER(_VkImageSubresource::GetarrayLayer) {
  _VkImageSubresource *self = Nan::ObjectWrap::Unwrap<_VkImageSubresource>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.arrayLayer));
}NAN_SETTER(_VkImageSubresource::SetarrayLayer) {
  _VkImageSubresource *self = Nan::ObjectWrap::Unwrap<_VkImageSubresource>(info.This());
  self->instance.arrayLayer = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
}