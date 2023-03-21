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
#include "protos/perfetto/common/ftrace_descriptor.gen.h"

namespace perfetto {
namespace protos {
namespace gen {

FtraceDescriptor::FtraceDescriptor() = default;
FtraceDescriptor::~FtraceDescriptor() = default;
FtraceDescriptor::FtraceDescriptor(const FtraceDescriptor&) = default;
FtraceDescriptor& FtraceDescriptor::operator=(const FtraceDescriptor&) = default;
FtraceDescriptor::FtraceDescriptor(FtraceDescriptor&&) noexcept = default;
FtraceDescriptor& FtraceDescriptor::operator=(FtraceDescriptor&&) = default;

bool FtraceDescriptor::operator==(const FtraceDescriptor& other) const {
  return unknown_fields_ == other.unknown_fields_
   && atrace_categories_ == other.atrace_categories_;
}

int FtraceDescriptor::atrace_categories_size() const { return static_cast<int>(atrace_categories_.size()); }
void FtraceDescriptor::clear_atrace_categories() { atrace_categories_.clear(); }
FtraceDescriptor_AtraceCategory* FtraceDescriptor::add_atrace_categories() { atrace_categories_.emplace_back(); return &atrace_categories_.back(); }
bool FtraceDescriptor::ParseFromArray(const void* raw, size_t size) {
  atrace_categories_.clear();
  unknown_fields_.clear();
  bool packed_error = false;

  ::protozero::ProtoDecoder dec(raw, size);
  for (auto field = dec.ReadField(); field.valid(); field = dec.ReadField()) {
    if (field.id() < _has_field_.size()) {
      _has_field_.set(field.id());
    }
    switch (field.id()) {
      case 1 /* atrace_categories */:
        atrace_categories_.emplace_back();
        atrace_categories_.back().ParseFromArray(field.data(), field.size());
        break;
      default:
        field.SerializeAndAppendTo(&unknown_fields_);
        break;
    }
  }
  return !packed_error && !dec.bytes_left();
}

std::string FtraceDescriptor::SerializeAsString() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsString();
}

std::vector<uint8_t> FtraceDescriptor::SerializeAsArray() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsArray();
}

void FtraceDescriptor::Serialize(::protozero::Message* msg) const {
  // Field 1: atrace_categories
  for (auto& it : atrace_categories_) {
    it.Serialize(msg->BeginNestedMessage<::protozero::Message>(1));
  }

  protozero::internal::gen_helpers::SerializeUnknownFields(unknown_fields_, msg);
}


FtraceDescriptor_AtraceCategory::FtraceDescriptor_AtraceCategory() = default;
FtraceDescriptor_AtraceCategory::~FtraceDescriptor_AtraceCategory() = default;
FtraceDescriptor_AtraceCategory::FtraceDescriptor_AtraceCategory(const FtraceDescriptor_AtraceCategory&) = default;
FtraceDescriptor_AtraceCategory& FtraceDescriptor_AtraceCategory::operator=(const FtraceDescriptor_AtraceCategory&) = default;
FtraceDescriptor_AtraceCategory::FtraceDescriptor_AtraceCategory(FtraceDescriptor_AtraceCategory&&) noexcept = default;
FtraceDescriptor_AtraceCategory& FtraceDescriptor_AtraceCategory::operator=(FtraceDescriptor_AtraceCategory&&) = default;

bool FtraceDescriptor_AtraceCategory::operator==(const FtraceDescriptor_AtraceCategory& other) const {
  return unknown_fields_ == other.unknown_fields_
   && name_ == other.name_
   && description_ == other.description_;
}

bool FtraceDescriptor_AtraceCategory::ParseFromArray(const void* raw, size_t size) {
  unknown_fields_.clear();
  bool packed_error = false;

  ::protozero::ProtoDecoder dec(raw, size);
  for (auto field = dec.ReadField(); field.valid(); field = dec.ReadField()) {
    if (field.id() < _has_field_.size()) {
      _has_field_.set(field.id());
    }
    switch (field.id()) {
      case 1 /* name */:
        ::protozero::internal::gen_helpers::DeserializeString(field, &name_);
        break;
      case 2 /* description */:
        ::protozero::internal::gen_helpers::DeserializeString(field, &description_);
        break;
      default:
        field.SerializeAndAppendTo(&unknown_fields_);
        break;
    }
  }
  return !packed_error && !dec.bytes_left();
}

std::string FtraceDescriptor_AtraceCategory::SerializeAsString() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsString();
}

std::vector<uint8_t> FtraceDescriptor_AtraceCategory::SerializeAsArray() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsArray();
}

void FtraceDescriptor_AtraceCategory::Serialize(::protozero::Message* msg) const {
  // Field 1: name
  if (_has_field_[1]) {
    ::protozero::internal::gen_helpers::SerializeString(1, name_, msg);
  }

  // Field 2: description
  if (_has_field_[2]) {
    ::protozero::internal::gen_helpers::SerializeString(2, description_, msg);
  }

  protozero::internal::gen_helpers::SerializeUnknownFields(unknown_fields_, msg);
}

}  // namespace perfetto
}  // namespace protos
}  // namespace gen
#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic pop
#endif
