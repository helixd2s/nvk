/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.5
 */
#include "utils.h"
#include "index.h"
#include "VkAttachmentDescription.h"

Nan::Persistent<v8::FunctionTemplate> _VkAttachmentDescription::constructor;

_VkAttachmentDescription::_VkAttachmentDescription() {
  
}

_VkAttachmentDescription::~_VkAttachmentDescription() {
  //printf("VkAttachmentDescription deconstructed!!\n");
}

void _VkAttachmentDescription::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkAttachmentDescription::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkAttachmentDescription").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("flags").ToLocalChecked(), Getflags, Setflags, ctor);
  SetPrototypeAccessor(proto, Nan::New("format").ToLocalChecked(), Getformat, Setformat, ctor);
  SetPrototypeAccessor(proto, Nan::New("samples").ToLocalChecked(), Getsamples, Setsamples, ctor);
  SetPrototypeAccessor(proto, Nan::New("loadOp").ToLocalChecked(), GetloadOp, SetloadOp, ctor);
  SetPrototypeAccessor(proto, Nan::New("storeOp").ToLocalChecked(), GetstoreOp, SetstoreOp, ctor);
  SetPrototypeAccessor(proto, Nan::New("stencilLoadOp").ToLocalChecked(), GetstencilLoadOp, SetstencilLoadOp, ctor);
  SetPrototypeAccessor(proto, Nan::New("stencilStoreOp").ToLocalChecked(), GetstencilStoreOp, SetstencilStoreOp, ctor);
  SetPrototypeAccessor(proto, Nan::New("initialLayout").ToLocalChecked(), GetinitialLayout, SetinitialLayout, ctor);
  SetPrototypeAccessor(proto, Nan::New("finalLayout").ToLocalChecked(), GetfinalLayout, SetfinalLayout, ctor);
  Nan::Set(target, Nan::New("VkAttachmentDescription").ToLocalChecked(), ctor->GetFunction());
}

NAN_METHOD(_VkAttachmentDescription::New) {
  if (info.IsConstructCall()) {
    _VkAttachmentDescription* self = new _VkAttachmentDescription();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      v8::Local<v8::String> sAccess0 = Nan::New("flags").ToLocalChecked();
      v8::Local<v8::String> sAccess1 = Nan::New("format").ToLocalChecked();
      v8::Local<v8::String> sAccess2 = Nan::New("samples").ToLocalChecked();
      v8::Local<v8::String> sAccess3 = Nan::New("loadOp").ToLocalChecked();
      v8::Local<v8::String> sAccess4 = Nan::New("storeOp").ToLocalChecked();
      v8::Local<v8::String> sAccess5 = Nan::New("stencilLoadOp").ToLocalChecked();
      v8::Local<v8::String> sAccess6 = Nan::New("stencilStoreOp").ToLocalChecked();
      v8::Local<v8::String> sAccess7 = Nan::New("initialLayout").ToLocalChecked();
      v8::Local<v8::String> sAccess8 = Nan::New("finalLayout").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess1)) info.This()->Set(sAccess1, obj->Get(sAccess1));
      if (obj->Has(sAccess2)) info.This()->Set(sAccess2, obj->Get(sAccess2));
      if (obj->Has(sAccess3)) info.This()->Set(sAccess3, obj->Get(sAccess3));
      if (obj->Has(sAccess4)) info.This()->Set(sAccess4, obj->Get(sAccess4));
      if (obj->Has(sAccess5)) info.This()->Set(sAccess5, obj->Get(sAccess5));
      if (obj->Has(sAccess6)) info.This()->Set(sAccess6, obj->Get(sAccess6));
      if (obj->Has(sAccess7)) info.This()->Set(sAccess7, obj->Get(sAccess7));
      if (obj->Has(sAccess8)) info.This()->Set(sAccess8, obj->Get(sAccess8));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkAttachmentDescription constructor cannot be invoked without 'new'");
  }
};

// flags
NAN_GETTER(_VkAttachmentDescription::Getflags) {
  _VkAttachmentDescription *self = Nan::ObjectWrap::Unwrap<_VkAttachmentDescription>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.flags));
}NAN_SETTER(_VkAttachmentDescription::Setflags) {
  _VkAttachmentDescription *self = Nan::ObjectWrap::Unwrap<_VkAttachmentDescription>(info.This());
  self->instance.flags = static_cast<VkAttachmentDescriptionFlags>(Nan::To<int32_t>(value).FromMaybe(0));
}// format
NAN_GETTER(_VkAttachmentDescription::Getformat) {
  _VkAttachmentDescription *self = Nan::ObjectWrap::Unwrap<_VkAttachmentDescription>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.format));
}NAN_SETTER(_VkAttachmentDescription::Setformat) {
  _VkAttachmentDescription *self = Nan::ObjectWrap::Unwrap<_VkAttachmentDescription>(info.This());
  self->instance.format = static_cast<VkFormat>(Nan::To<int32_t>(value).FromMaybe(0));
}// samples
NAN_GETTER(_VkAttachmentDescription::Getsamples) {
  _VkAttachmentDescription *self = Nan::ObjectWrap::Unwrap<_VkAttachmentDescription>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.samples));
}NAN_SETTER(_VkAttachmentDescription::Setsamples) {
  _VkAttachmentDescription *self = Nan::ObjectWrap::Unwrap<_VkAttachmentDescription>(info.This());
  self->instance.samples = static_cast<VkSampleCountFlagBits>(Nan::To<int32_t>(value).FromMaybe(0));
}// loadOp
NAN_GETTER(_VkAttachmentDescription::GetloadOp) {
  _VkAttachmentDescription *self = Nan::ObjectWrap::Unwrap<_VkAttachmentDescription>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.loadOp));
}NAN_SETTER(_VkAttachmentDescription::SetloadOp) {
  _VkAttachmentDescription *self = Nan::ObjectWrap::Unwrap<_VkAttachmentDescription>(info.This());
  self->instance.loadOp = static_cast<VkAttachmentLoadOp>(Nan::To<int32_t>(value).FromMaybe(0));
}// storeOp
NAN_GETTER(_VkAttachmentDescription::GetstoreOp) {
  _VkAttachmentDescription *self = Nan::ObjectWrap::Unwrap<_VkAttachmentDescription>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.storeOp));
}NAN_SETTER(_VkAttachmentDescription::SetstoreOp) {
  _VkAttachmentDescription *self = Nan::ObjectWrap::Unwrap<_VkAttachmentDescription>(info.This());
  self->instance.storeOp = static_cast<VkAttachmentStoreOp>(Nan::To<int32_t>(value).FromMaybe(0));
}// stencilLoadOp
NAN_GETTER(_VkAttachmentDescription::GetstencilLoadOp) {
  _VkAttachmentDescription *self = Nan::ObjectWrap::Unwrap<_VkAttachmentDescription>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.stencilLoadOp));
}NAN_SETTER(_VkAttachmentDescription::SetstencilLoadOp) {
  _VkAttachmentDescription *self = Nan::ObjectWrap::Unwrap<_VkAttachmentDescription>(info.This());
  self->instance.stencilLoadOp = static_cast<VkAttachmentLoadOp>(Nan::To<int32_t>(value).FromMaybe(0));
}// stencilStoreOp
NAN_GETTER(_VkAttachmentDescription::GetstencilStoreOp) {
  _VkAttachmentDescription *self = Nan::ObjectWrap::Unwrap<_VkAttachmentDescription>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.stencilStoreOp));
}NAN_SETTER(_VkAttachmentDescription::SetstencilStoreOp) {
  _VkAttachmentDescription *self = Nan::ObjectWrap::Unwrap<_VkAttachmentDescription>(info.This());
  self->instance.stencilStoreOp = static_cast<VkAttachmentStoreOp>(Nan::To<int32_t>(value).FromMaybe(0));
}// initialLayout
NAN_GETTER(_VkAttachmentDescription::GetinitialLayout) {
  _VkAttachmentDescription *self = Nan::ObjectWrap::Unwrap<_VkAttachmentDescription>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.initialLayout));
}NAN_SETTER(_VkAttachmentDescription::SetinitialLayout) {
  _VkAttachmentDescription *self = Nan::ObjectWrap::Unwrap<_VkAttachmentDescription>(info.This());
  self->instance.initialLayout = static_cast<VkImageLayout>(Nan::To<int32_t>(value).FromMaybe(0));
}// finalLayout
NAN_GETTER(_VkAttachmentDescription::GetfinalLayout) {
  _VkAttachmentDescription *self = Nan::ObjectWrap::Unwrap<_VkAttachmentDescription>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.finalLayout));
}NAN_SETTER(_VkAttachmentDescription::SetfinalLayout) {
  _VkAttachmentDescription *self = Nan::ObjectWrap::Unwrap<_VkAttachmentDescription>(info.This());
  self->instance.finalLayout = static_cast<VkImageLayout>(Nan::To<int32_t>(value).FromMaybe(0));
}