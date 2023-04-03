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
#include "protos/perfetto/trace/gpu/gpu_counter_event.gen.h"
#include "protos/perfetto/common/gpu_counter_descriptor.gen.h"

namespace perfetto {
namespace protos {
namespace gen {

GpuCounterEvent::GpuCounterEvent() = default;
GpuCounterEvent::~GpuCounterEvent() = default;
GpuCounterEvent::GpuCounterEvent(const GpuCounterEvent&) = default;
GpuCounterEvent& GpuCounterEvent::operator=(const GpuCounterEvent&) = default;
GpuCounterEvent::GpuCounterEvent(GpuCounterEvent&&) noexcept = default;
GpuCounterEvent& GpuCounterEvent::operator=(GpuCounterEvent&&) = default;

bool GpuCounterEvent::operator==(const GpuCounterEvent& other) const {
  return unknown_fields_ == other.unknown_fields_
   && counter_descriptor_ == other.counter_descriptor_
   && counters_ == other.counters_
   && gpu_id_ == other.gpu_id_;
}

int GpuCounterEvent::counters_size() const { return static_cast<int>(counters_.size()); }
void GpuCounterEvent::clear_counters() { counters_.clear(); }
GpuCounterEvent_GpuCounter* GpuCounterEvent::add_counters() { counters_.emplace_back(); return &counters_.back(); }
bool GpuCounterEvent::ParseFromArray(const void* raw, size_t size) {
  counters_.clear();
  unknown_fields_.clear();
  bool packed_error = false;

  ::protozero::ProtoDecoder dec(raw, size);
  for (auto field = dec.ReadField(); field.valid(); field = dec.ReadField()) {
    if (field.id() < _has_field_.size()) {
      _has_field_.set(field.id());
    }
    switch (field.id()) {
      case 1 /* counter_descriptor */:
        (*counter_descriptor_).ParseFromArray(field.data(), field.size());
        break;
      case 2 /* counters */:
        counters_.emplace_back();
        counters_.back().ParseFromArray(field.data(), field.size());
        break;
      case 3 /* gpu_id */:
        field.get(&gpu_id_);
        break;
      default:
        field.SerializeAndAppendTo(&unknown_fields_);
        break;
    }
  }
  return !packed_error && !dec.bytes_left();
}

std::string GpuCounterEvent::SerializeAsString() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsString();
}

std::vector<uint8_t> GpuCounterEvent::SerializeAsArray() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsArray();
}

void GpuCounterEvent::Serialize(::protozero::Message* msg) const {
  // Field 1: counter_descriptor
  if (_has_field_[1]) {
    (*counter_descriptor_).Serialize(msg->BeginNestedMessage<::protozero::Message>(1));
  }

  // Field 2: counters
  for (auto& it : counters_) {
    it.Serialize(msg->BeginNestedMessage<::protozero::Message>(2));
  }

  // Field 3: gpu_id
  if (_has_field_[3]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(3, gpu_id_, msg);
  }

  protozero::internal::gen_helpers::SerializeUnknownFields(unknown_fields_, msg);
}


GpuCounterEvent_GpuCounter::GpuCounterEvent_GpuCounter() = default;
GpuCounterEvent_GpuCounter::~GpuCounterEvent_GpuCounter() = default;
GpuCounterEvent_GpuCounter::GpuCounterEvent_GpuCounter(const GpuCounterEvent_GpuCounter&) = default;
GpuCounterEvent_GpuCounter& GpuCounterEvent_GpuCounter::operator=(const GpuCounterEvent_GpuCounter&) = default;
GpuCounterEvent_GpuCounter::GpuCounterEvent_GpuCounter(GpuCounterEvent_GpuCounter&&) noexcept = default;
GpuCounterEvent_GpuCounter& GpuCounterEvent_GpuCounter::operator=(GpuCounterEvent_GpuCounter&&) = default;

bool GpuCounterEvent_GpuCounter::operator==(const GpuCounterEvent_GpuCounter& other) const {
  return unknown_fields_ == other.unknown_fields_
   && counter_id_ == other.counter_id_
   && int_value_ == other.int_value_
   && double_value_ == other.double_value_;
}

bool GpuCounterEvent_GpuCounter::ParseFromArray(const void* raw, size_t size) {
  unknown_fields_.clear();
  bool packed_error = false;

  ::protozero::ProtoDecoder dec(raw, size);
  for (auto field = dec.ReadField(); field.valid(); field = dec.ReadField()) {
    if (field.id() < _has_field_.size()) {
      _has_field_.set(field.id());
    }
    switch (field.id()) {
      case 1 /* counter_id */:
        field.get(&counter_id_);
        break;
      case 2 /* int_value */:
        field.get(&int_value_);
        break;
      case 3 /* double_value */:
        field.get(&double_value_);
        break;
      default:
        field.SerializeAndAppendTo(&unknown_fields_);
        break;
    }
  }
  return !packed_error && !dec.bytes_left();
}

std::string GpuCounterEvent_GpuCounter::SerializeAsString() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsString();
}

std::vector<uint8_t> GpuCounterEvent_GpuCounter::SerializeAsArray() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsArray();
}

void GpuCounterEvent_GpuCounter::Serialize(::protozero::Message* msg) const {
  // Field 1: counter_id
  if (_has_field_[1]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(1, counter_id_, msg);
  }

  // Field 2: int_value
  if (_has_field_[2]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(2, int_value_, msg);
  }

  // Field 3: double_value
  if (_has_field_[3]) {
    ::protozero::internal::gen_helpers::SerializeFixed(3, double_value_, msg);
  }

  protozero::internal::gen_helpers::SerializeUnknownFields(unknown_fields_, msg);
}

}  // namespace perfetto
}  // namespace protos
}  // namespace gen
#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic pop
#endif
