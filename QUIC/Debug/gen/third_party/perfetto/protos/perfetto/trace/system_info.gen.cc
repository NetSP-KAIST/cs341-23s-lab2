#include "perfetto/protozero/gen_field_helpers.h"
#include "perfetto/protozero/message.h"
#include "perfetto/protozero/packed_repeated_fields.h"
#include "perfetto/protozero/proto_decoder.h"
#include "perfetto/protozero/scattered_heap_buffer.h"
// DO NOT EDIT. Autogenerated by Perfetto cppgen_plugin
#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wfloat-equal"
#endif
#include "protos/perfetto/trace/system_info.gen.h"

namespace perfetto {
namespace protos {
namespace gen {

SystemInfo::SystemInfo() = default;
SystemInfo::~SystemInfo() = default;
SystemInfo::SystemInfo(const SystemInfo&) = default;
SystemInfo& SystemInfo::operator=(const SystemInfo&) = default;
SystemInfo::SystemInfo(SystemInfo&&) noexcept = default;
SystemInfo& SystemInfo::operator=(SystemInfo&&) = default;

bool SystemInfo::operator==(const SystemInfo& other) const {
  return unknown_fields_ == other.unknown_fields_
   && utsname_ == other.utsname_
   && android_build_fingerprint_ == other.android_build_fingerprint_
   && hz_ == other.hz_
   && tracing_service_version_ == other.tracing_service_version_
   && android_sdk_version_ == other.android_sdk_version_
   && page_size_ == other.page_size_;
}

bool SystemInfo::ParseFromArray(const void* raw, size_t size) {
  unknown_fields_.clear();
  bool packed_error = false;

  ::protozero::ProtoDecoder dec(raw, size);
  for (auto field = dec.ReadField(); field.valid(); field = dec.ReadField()) {
    if (field.id() < _has_field_.size()) {
      _has_field_.set(field.id());
    }
    switch (field.id()) {
      case 1 /* utsname */:
        (*utsname_).ParseFromArray(field.data(), field.size());
        break;
      case 2 /* android_build_fingerprint */:
        ::protozero::internal::gen_helpers::DeserializeString(field, &android_build_fingerprint_);
        break;
      case 3 /* hz */:
        field.get(&hz_);
        break;
      case 4 /* tracing_service_version */:
        ::protozero::internal::gen_helpers::DeserializeString(field, &tracing_service_version_);
        break;
      case 5 /* android_sdk_version */:
        field.get(&android_sdk_version_);
        break;
      case 6 /* page_size */:
        field.get(&page_size_);
        break;
      default:
        field.SerializeAndAppendTo(&unknown_fields_);
        break;
    }
  }
  return !packed_error && !dec.bytes_left();
}

std::string SystemInfo::SerializeAsString() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsString();
}

std::vector<uint8_t> SystemInfo::SerializeAsArray() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsArray();
}

void SystemInfo::Serialize(::protozero::Message* msg) const {
  // Field 1: utsname
  if (_has_field_[1]) {
    (*utsname_).Serialize(msg->BeginNestedMessage<::protozero::Message>(1));
  }

  // Field 2: android_build_fingerprint
  if (_has_field_[2]) {
    ::protozero::internal::gen_helpers::SerializeString(2, android_build_fingerprint_, msg);
  }

  // Field 3: hz
  if (_has_field_[3]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(3, hz_, msg);
  }

  // Field 4: tracing_service_version
  if (_has_field_[4]) {
    ::protozero::internal::gen_helpers::SerializeString(4, tracing_service_version_, msg);
  }

  // Field 5: android_sdk_version
  if (_has_field_[5]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(5, android_sdk_version_, msg);
  }

  // Field 6: page_size
  if (_has_field_[6]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(6, page_size_, msg);
  }

  protozero::internal::gen_helpers::SerializeUnknownFields(unknown_fields_, msg);
}


Utsname::Utsname() = default;
Utsname::~Utsname() = default;
Utsname::Utsname(const Utsname&) = default;
Utsname& Utsname::operator=(const Utsname&) = default;
Utsname::Utsname(Utsname&&) noexcept = default;
Utsname& Utsname::operator=(Utsname&&) = default;

bool Utsname::operator==(const Utsname& other) const {
  return unknown_fields_ == other.unknown_fields_
   && sysname_ == other.sysname_
   && version_ == other.version_
   && release_ == other.release_
   && machine_ == other.machine_;
}

bool Utsname::ParseFromArray(const void* raw, size_t size) {
  unknown_fields_.clear();
  bool packed_error = false;

  ::protozero::ProtoDecoder dec(raw, size);
  for (auto field = dec.ReadField(); field.valid(); field = dec.ReadField()) {
    if (field.id() < _has_field_.size()) {
      _has_field_.set(field.id());
    }
    switch (field.id()) {
      case 1 /* sysname */:
        ::protozero::internal::gen_helpers::DeserializeString(field, &sysname_);
        break;
      case 2 /* version */:
        ::protozero::internal::gen_helpers::DeserializeString(field, &version_);
        break;
      case 3 /* release */:
        ::protozero::internal::gen_helpers::DeserializeString(field, &release_);
        break;
      case 4 /* machine */:
        ::protozero::internal::gen_helpers::DeserializeString(field, &machine_);
        break;
      default:
        field.SerializeAndAppendTo(&unknown_fields_);
        break;
    }
  }
  return !packed_error && !dec.bytes_left();
}

std::string Utsname::SerializeAsString() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsString();
}

std::vector<uint8_t> Utsname::SerializeAsArray() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsArray();
}

void Utsname::Serialize(::protozero::Message* msg) const {
  // Field 1: sysname
  if (_has_field_[1]) {
    ::protozero::internal::gen_helpers::SerializeString(1, sysname_, msg);
  }

  // Field 2: version
  if (_has_field_[2]) {
    ::protozero::internal::gen_helpers::SerializeString(2, version_, msg);
  }

  // Field 3: release
  if (_has_field_[3]) {
    ::protozero::internal::gen_helpers::SerializeString(3, release_, msg);
  }

  // Field 4: machine
  if (_has_field_[4]) {
    ::protozero::internal::gen_helpers::SerializeString(4, machine_, msg);
  }

  protozero::internal::gen_helpers::SerializeUnknownFields(unknown_fields_, msg);
}

}  // namespace perfetto
}  // namespace protos
}  // namespace gen
#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic pop
#endif