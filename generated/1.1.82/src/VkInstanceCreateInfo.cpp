/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.5
 */
#include "utils.h"
#include "index.h"
#include "VkInstanceCreateInfo.h"

Nan::Persistent<v8::FunctionTemplate> _VkInstanceCreateInfo::constructor;

_VkInstanceCreateInfo::_VkInstanceCreateInfo() {
  instance.sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;
}

_VkInstanceCreateInfo::~_VkInstanceCreateInfo() {
  //printf("VkInstanceCreateInfo deconstructed!!\n");
}

void _VkInstanceCreateInfo::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkInstanceCreateInfo::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkInstanceCreateInfo").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, SetsType, ctor);
  SetPrototypeAccessor(proto, Nan::New("pNext").ToLocalChecked(), GetpNext, SetpNext, ctor);
  SetPrototypeAccessor(proto, Nan::New("flags").ToLocalChecked(), Getflags, Setflags, ctor);
  SetPrototypeAccessor(proto, Nan::New("pApplicationInfo").ToLocalChecked(), GetpApplicationInfo, SetpApplicationInfo, ctor);
  SetPrototypeAccessor(proto, Nan::New("enabledLayerCount").ToLocalChecked(), GetenabledLayerCount, SetenabledLayerCount, ctor);
  SetPrototypeAccessor(proto, Nan::New("ppEnabledLayerNames").ToLocalChecked(), GetppEnabledLayerNames, SetppEnabledLayerNames, ctor);
  SetPrototypeAccessor(proto, Nan::New("enabledExtensionCount").ToLocalChecked(), GetenabledExtensionCount, SetenabledExtensionCount, ctor);
  SetPrototypeAccessor(proto, Nan::New("ppEnabledExtensionNames").ToLocalChecked(), GetppEnabledExtensionNames, SetppEnabledExtensionNames, ctor);
  Nan::Set(target, Nan::New("VkInstanceCreateInfo").ToLocalChecked(), ctor->GetFunction());
}

NAN_METHOD(_VkInstanceCreateInfo::New) {
  if (info.IsConstructCall()) {
    _VkInstanceCreateInfo* self = new _VkInstanceCreateInfo();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      v8::Local<v8::String> sAccess0 = Nan::New("sType").ToLocalChecked();
      v8::Local<v8::String> sAccess1 = Nan::New("pNext").ToLocalChecked();
      v8::Local<v8::String> sAccess2 = Nan::New("flags").ToLocalChecked();
      v8::Local<v8::String> sAccess3 = Nan::New("pApplicationInfo").ToLocalChecked();
      v8::Local<v8::String> sAccess4 = Nan::New("enabledLayerCount").ToLocalChecked();
      v8::Local<v8::String> sAccess5 = Nan::New("ppEnabledLayerNames").ToLocalChecked();
      v8::Local<v8::String> sAccess6 = Nan::New("enabledExtensionCount").ToLocalChecked();
      v8::Local<v8::String> sAccess7 = Nan::New("ppEnabledExtensionNames").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess1)) info.This()->Set(sAccess1, obj->Get(sAccess1));
      if (obj->Has(sAccess2)) info.This()->Set(sAccess2, obj->Get(sAccess2));
      if (obj->Has(sAccess3)) info.This()->Set(sAccess3, obj->Get(sAccess3));
      if (obj->Has(sAccess4)) info.This()->Set(sAccess4, obj->Get(sAccess4));
      if (obj->Has(sAccess5)) info.This()->Set(sAccess5, obj->Get(sAccess5));
      if (obj->Has(sAccess6)) info.This()->Set(sAccess6, obj->Get(sAccess6));
      if (obj->Has(sAccess7)) info.This()->Set(sAccess7, obj->Get(sAccess7));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkInstanceCreateInfo constructor cannot be invoked without 'new'");
  }
};

// sType
NAN_GETTER(_VkInstanceCreateInfo::GetsType) {
  _VkInstanceCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkInstanceCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}NAN_SETTER(_VkInstanceCreateInfo::SetsType) {
  _VkInstanceCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkInstanceCreateInfo>(info.This());
  self->instance.sType = static_cast<VkStructureType>(Nan::To<int32_t>(value).FromMaybe(0));
}// pNext
NAN_GETTER(_VkInstanceCreateInfo::GetpNext) {
  _VkInstanceCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkInstanceCreateInfo>(info.This());
}NAN_SETTER(_VkInstanceCreateInfo::SetpNext) {
  _VkInstanceCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkInstanceCreateInfo>(info.This());
}// flags
NAN_GETTER(_VkInstanceCreateInfo::Getflags) {
  _VkInstanceCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkInstanceCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.flags));
}NAN_SETTER(_VkInstanceCreateInfo::Setflags) {
  _VkInstanceCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkInstanceCreateInfo>(info.This());
  self->instance.flags = static_cast<VkInstanceCreateFlags>(Nan::To<int32_t>(value).FromMaybe(0));
}// pApplicationInfo
NAN_GETTER(_VkInstanceCreateInfo::GetpApplicationInfo) {
  _VkInstanceCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkInstanceCreateInfo>(info.This());
  if (self->pApplicationInfo.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->pApplicationInfo);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkInstanceCreateInfo::SetpApplicationInfo) {
  _VkInstanceCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkInstanceCreateInfo>(info.This());
  // js
  if (!(value->IsNull())) {
    Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> obj(Nan::To<v8::Object>(value).ToLocalChecked());
    self->pApplicationInfo = obj;
  } else {
    //self->pApplicationInfo = Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>>(Nan::Null());
  }
  // vulkan
  if (!(value->IsNull())) {
    _VkApplicationInfo* obj = Nan::ObjectWrap::Unwrap<_VkApplicationInfo>(Nan::To<v8::Object>(value).ToLocalChecked());
    self->instance.pApplicationInfo = &obj->instance;
  } else {
    self->instance.pApplicationInfo = nullptr;
  }
}// enabledLayerCount
NAN_GETTER(_VkInstanceCreateInfo::GetenabledLayerCount) {
  _VkInstanceCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkInstanceCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.enabledLayerCount));
}NAN_SETTER(_VkInstanceCreateInfo::SetenabledLayerCount) {
  _VkInstanceCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkInstanceCreateInfo>(info.This());
  self->instance.enabledLayerCount = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
}// ppEnabledLayerNames
NAN_GETTER(_VkInstanceCreateInfo::GetppEnabledLayerNames) {
  _VkInstanceCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkInstanceCreateInfo>(info.This());
  if (self->ppEnabledLayerNames.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->ppEnabledLayerNames);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkInstanceCreateInfo::SetppEnabledLayerNames) {
  _VkInstanceCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkInstanceCreateInfo>(info.This());
  
    // js
    if (value->IsArray() || value->IsArrayBufferView()) {
      v8::Handle<v8::Array> arr = v8::Handle<v8::Array>::Cast(value);
      Nan::Persistent<v8::Array, v8::CopyablePersistentTraits<v8::Array>> obj(arr);
      self->ppEnabledLayerNames = obj;
    } else {
      if (!self->ppEnabledLayerNames.IsEmpty()) self->ppEnabledLayerNames.Empty();
    }
  
  // vulkan
  if (value->IsArray()) {
    self->instance.ppEnabledLayerNames = createArrayOfV8Strings(value);
  } else {
    self->instance.ppEnabledLayerNames = nullptr;
  }
}// enabledExtensionCount
NAN_GETTER(_VkInstanceCreateInfo::GetenabledExtensionCount) {
  _VkInstanceCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkInstanceCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.enabledExtensionCount));
}NAN_SETTER(_VkInstanceCreateInfo::SetenabledExtensionCount) {
  _VkInstanceCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkInstanceCreateInfo>(info.This());
  self->instance.enabledExtensionCount = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
}// ppEnabledExtensionNames
NAN_GETTER(_VkInstanceCreateInfo::GetppEnabledExtensionNames) {
  _VkInstanceCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkInstanceCreateInfo>(info.This());
  if (self->ppEnabledExtensionNames.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->ppEnabledExtensionNames);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkInstanceCreateInfo::SetppEnabledExtensionNames) {
  _VkInstanceCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkInstanceCreateInfo>(info.This());
  
    // js
    if (value->IsArray() || value->IsArrayBufferView()) {
      v8::Handle<v8::Array> arr = v8::Handle<v8::Array>::Cast(value);
      Nan::Persistent<v8::Array, v8::CopyablePersistentTraits<v8::Array>> obj(arr);
      self->ppEnabledExtensionNames = obj;
    } else {
      if (!self->ppEnabledExtensionNames.IsEmpty()) self->ppEnabledExtensionNames.Empty();
    }
  
  // vulkan
  if (value->IsArray()) {
    self->instance.ppEnabledExtensionNames = createArrayOfV8Strings(value);
  } else {
    self->instance.ppEnabledExtensionNames = nullptr;
  }
}