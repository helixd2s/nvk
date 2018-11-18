/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.5
 */
#include "utils.h"
#include "index.h"
#include "VkOffset2D.h"

Nan::Persistent<v8::FunctionTemplate> _VkOffset2D::constructor;

_VkOffset2D::_VkOffset2D() {
  
}

_VkOffset2D::~_VkOffset2D() {
  //printf("VkOffset2D deconstructed!!\n");
}

void _VkOffset2D::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkOffset2D::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkOffset2D").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("x").ToLocalChecked(), Getx, Setx, ctor);
  SetPrototypeAccessor(proto, Nan::New("y").ToLocalChecked(), Gety, Sety, ctor);
  Nan::Set(target, Nan::New("VkOffset2D").ToLocalChecked(), ctor->GetFunction());
}

NAN_METHOD(_VkOffset2D::New) {
  if (info.IsConstructCall()) {
    _VkOffset2D* self = new _VkOffset2D();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      v8::Local<v8::String> sAccess0 = Nan::New("x").ToLocalChecked();
      v8::Local<v8::String> sAccess1 = Nan::New("y").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess1)) info.This()->Set(sAccess1, obj->Get(sAccess1));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkOffset2D constructor cannot be invoked without 'new'");
  }
};

// x
NAN_GETTER(_VkOffset2D::Getx) {
  _VkOffset2D *self = Nan::ObjectWrap::Unwrap<_VkOffset2D>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.x));
}NAN_SETTER(_VkOffset2D::Setx) {
  _VkOffset2D *self = Nan::ObjectWrap::Unwrap<_VkOffset2D>(info.This());
  self->instance.x = static_cast<int32_t>(Nan::To<int64_t>(value).FromMaybe(0));
}// y
NAN_GETTER(_VkOffset2D::Gety) {
  _VkOffset2D *self = Nan::ObjectWrap::Unwrap<_VkOffset2D>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.y));
}NAN_SETTER(_VkOffset2D::Sety) {
  _VkOffset2D *self = Nan::ObjectWrap::Unwrap<_VkOffset2D>(info.This());
  self->instance.y = static_cast<int32_t>(Nan::To<int64_t>(value).FromMaybe(0));
}