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
#include "protos/perfetto/trace/clock_snapshot.gen.h"
#include "protos/perfetto/common/builtin_clock.gen.h"

namespace perfetto {
namespace protos {
namespace gen {

ClockSnapshot::ClockSnapshot() = default;
ClockSnapshot::~ClockSnapshot() = default;
ClockSnapshot::ClockSnapshot(const ClockSnapshot&) = default;
ClockSnapshot& ClockSnapshot::operator=(const ClockSnapshot&) = default;
ClockSnapshot::ClockSnapshot(ClockSnapshot&&) noexcept = default;
ClockSnapshot& ClockSnapshot::operator=(ClockSnapshot&&) = default;

bool ClockSnapshot::operator==(const ClockSnapshot& other) const {
  return unknown_fields_ == other.unknown_fields_
   && clocks_ == other.clocks_
   && primary_trace_clock_ == other.primary_trace_clock_;
}

int ClockSnapshot::clocks_size() const { return static_cast<int>(clocks_.size()); }
void ClockSnapshot::clear_clocks() { clocks_.clear(); }
ClockSnapshot_Clock* ClockSnapshot::add_clocks() { clocks_.emplace_back(); return &clocks_.back(); }
bool ClockSnapshot::ParseFromArray(const void* raw, size_t size) {
  clocks_.clear();
  unknown_fields_.clear();
  bool packed_error = false;

  ::protozero::ProtoDecoder dec(raw, size);
  for (auto field = dec.ReadField(); field.valid(); field = dec.ReadField()) {
    if (field.id() < _has_field_.size()) {
      _has_field_.set(field.id());
    }
    switch (field.id()) {
      case 1 /* clocks */:
        clocks_.emplace_back();
        clocks_.back().ParseFromArray(field.data(), field.size());
        break;
      case 2 /* primary_trace_clock */:
        field.get(&primary_trace_clock_);
        break;
      default:
        field.SerializeAndAppendTo(&unknown_fields_);
        break;
    }
  }
  return !packed_error && !dec.bytes_left();
}

std::string ClockSnapshot::SerializeAsString() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsString();
}

std::vector<uint8_t> ClockSnapshot::SerializeAsArray() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsArray();
}

void ClockSnapshot::Serialize(::protozero::Message* msg) const {
  // Field 1: clocks
  for (auto& it : clocks_) {
    it.Serialize(msg->BeginNestedMessage<::protozero::Message>(1));
  }

  // Field 2: primary_trace_clock
  if (_has_field_[2]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(2, primary_trace_clock_, msg);
  }

  protozero::internal::gen_helpers::SerializeUnknownFields(unknown_fields_, msg);
}


ClockSnapshot_Clock::ClockSnapshot_Clock() = default;
ClockSnapshot_Clock::~ClockSnapshot_Clock() = default;
ClockSnapshot_Clock::ClockSnapshot_Clock(const ClockSnapshot_Clock&) = default;
ClockSnapshot_Clock& ClockSnapshot_Clock::operator=(const ClockSnapshot_Clock&) = default;
ClockSnapshot_Clock::ClockSnapshot_Clock(ClockSnapshot_Clock&&) noexcept = default;
ClockSnapshot_Clock& ClockSnapshot_Clock::operator=(ClockSnapshot_Clock&&) = default;

bool ClockSnapshot_Clock::operator==(const ClockSnapshot_Clock& other) const {
  return unknown_fields_ == other.unknown_fields_
   && clock_id_ == other.clock_id_
   && timestamp_ == other.timestamp_
   && is_incremental_ == other.is_incremental_
   && unit_multiplier_ns_ == other.unit_multiplier_ns_;
}

bool ClockSnapshot_Clock::ParseFromArray(const void* raw, size_t size) {
  unknown_fields_.clear();
  bool packed_error = false;

  ::protozero::ProtoDecoder dec(raw, size);
  for (auto field = dec.ReadField(); field.valid(); field = dec.ReadField()) {
    if (field.id() < _has_field_.size()) {
      _has_field_.set(field.id());
    }
    switch (field.id()) {
      case 1 /* clock_id */:
        field.get(&clock_id_);
        break;
      case 2 /* timestamp */:
        field.get(&timestamp_);
        break;
      case 3 /* is_incremental */:
        field.get(&is_incremental_);
        break;
      case 4 /* unit_multiplier_ns */:
        field.get(&unit_multiplier_ns_);
        break;
      default:
        field.SerializeAndAppendTo(&unknown_fields_);
        break;
    }
  }
  return !packed_error && !dec.bytes_left();
}

std::string ClockSnapshot_Clock::SerializeAsString() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsString();
}

std::vector<uint8_t> ClockSnapshot_Clock::SerializeAsArray() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsArray();
}

void ClockSnapshot_Clock::Serialize(::protozero::Message* msg) const {
  // Field 1: clock_id
  if (_has_field_[1]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(1, clock_id_, msg);
  }

  // Field 2: timestamp
  if (_has_field_[2]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(2, timestamp_, msg);
  }

  // Field 3: is_incremental
  if (_has_field_[3]) {
    ::protozero::internal::gen_helpers::SerializeTinyVarInt(3, is_incremental_, msg);
  }

  // Field 4: unit_multiplier_ns
  if (_has_field_[4]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(4, unit_multiplier_ns_, msg);
  }

  protozero::internal::gen_helpers::SerializeUnknownFields(unknown_fields_, msg);
}

}  // namespace perfetto
}  // namespace protos
}  // namespace gen
#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic pop
#endif