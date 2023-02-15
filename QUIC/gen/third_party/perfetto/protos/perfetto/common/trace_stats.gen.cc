#include "perfetto/protozero/message.h"
#include "perfetto/protozero/packed_repeated_fields.h"
#include "perfetto/protozero/proto_decoder.h"
#include "perfetto/protozero/scattered_heap_buffer.h"
// DO NOT EDIT. Autogenerated by Perfetto cppgen_plugin
#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wfloat-equal"
#endif
#include "protos/perfetto/common/trace_stats.gen.h"

namespace perfetto {
namespace protos {
namespace gen {

TraceStats::TraceStats() = default;
TraceStats::~TraceStats() = default;
TraceStats::TraceStats(const TraceStats&) = default;
TraceStats& TraceStats::operator=(const TraceStats&) = default;
TraceStats::TraceStats(TraceStats&&) noexcept = default;
TraceStats& TraceStats::operator=(TraceStats&&) = default;

bool TraceStats::operator==(const TraceStats& other) const {
  return unknown_fields_ == other.unknown_fields_
   && buffer_stats_ == other.buffer_stats_
   && producers_connected_ == other.producers_connected_
   && producers_seen_ == other.producers_seen_
   && data_sources_registered_ == other.data_sources_registered_
   && data_sources_seen_ == other.data_sources_seen_
   && tracing_sessions_ == other.tracing_sessions_
   && total_buffers_ == other.total_buffers_
   && chunks_discarded_ == other.chunks_discarded_
   && patches_discarded_ == other.patches_discarded_
   && invalid_packets_ == other.invalid_packets_
   && filter_stats_ == other.filter_stats_
   && flushes_requested_ == other.flushes_requested_
   && flushes_succeeded_ == other.flushes_succeeded_
   && flushes_failed_ == other.flushes_failed_
   && final_flush_outcome_ == other.final_flush_outcome_;
}

int TraceStats::buffer_stats_size() const { return static_cast<int>(buffer_stats_.size()); }
void TraceStats::clear_buffer_stats() { buffer_stats_.clear(); }
TraceStats_BufferStats* TraceStats::add_buffer_stats() { buffer_stats_.emplace_back(); return &buffer_stats_.back(); }
bool TraceStats::ParseFromArray(const void* raw, size_t size) {
  buffer_stats_.clear();
  unknown_fields_.clear();
  bool packed_error = false;

  ::protozero::ProtoDecoder dec(raw, size);
  for (auto field = dec.ReadField(); field.valid(); field = dec.ReadField()) {
    if (field.id() < _has_field_.size()) {
      _has_field_.set(field.id());
    }
    switch (field.id()) {
      case 1 /* buffer_stats */:
        buffer_stats_.emplace_back();
        buffer_stats_.back().ParseFromArray(field.data(), field.size());
        break;
      case 2 /* producers_connected */:
        field.get(&producers_connected_);
        break;
      case 3 /* producers_seen */:
        field.get(&producers_seen_);
        break;
      case 4 /* data_sources_registered */:
        field.get(&data_sources_registered_);
        break;
      case 5 /* data_sources_seen */:
        field.get(&data_sources_seen_);
        break;
      case 6 /* tracing_sessions */:
        field.get(&tracing_sessions_);
        break;
      case 7 /* total_buffers */:
        field.get(&total_buffers_);
        break;
      case 8 /* chunks_discarded */:
        field.get(&chunks_discarded_);
        break;
      case 9 /* patches_discarded */:
        field.get(&patches_discarded_);
        break;
      case 10 /* invalid_packets */:
        field.get(&invalid_packets_);
        break;
      case 11 /* filter_stats */:
        (*filter_stats_).ParseFromArray(field.data(), field.size());
        break;
      case 12 /* flushes_requested */:
        field.get(&flushes_requested_);
        break;
      case 13 /* flushes_succeeded */:
        field.get(&flushes_succeeded_);
        break;
      case 14 /* flushes_failed */:
        field.get(&flushes_failed_);
        break;
      case 15 /* final_flush_outcome */:
        field.get(&final_flush_outcome_);
        break;
      default:
        field.SerializeAndAppendTo(&unknown_fields_);
        break;
    }
  }
  return !packed_error && !dec.bytes_left();
}

std::string TraceStats::SerializeAsString() const {
  ::protozero::HeapBuffered<::protozero::Message> msg;
  Serialize(msg.get());
  return msg.SerializeAsString();
}

std::vector<uint8_t> TraceStats::SerializeAsArray() const {
  ::protozero::HeapBuffered<::protozero::Message> msg;
  Serialize(msg.get());
  return msg.SerializeAsArray();
}

void TraceStats::Serialize(::protozero::Message* msg) const {
  // Field 1: buffer_stats
  for (auto& it : buffer_stats_) {
    it.Serialize(msg->BeginNestedMessage<::protozero::Message>(1));
  }

  // Field 2: producers_connected
  if (_has_field_[2]) {
    msg->AppendVarInt(2, producers_connected_);
  }

  // Field 3: producers_seen
  if (_has_field_[3]) {
    msg->AppendVarInt(3, producers_seen_);
  }

  // Field 4: data_sources_registered
  if (_has_field_[4]) {
    msg->AppendVarInt(4, data_sources_registered_);
  }

  // Field 5: data_sources_seen
  if (_has_field_[5]) {
    msg->AppendVarInt(5, data_sources_seen_);
  }

  // Field 6: tracing_sessions
  if (_has_field_[6]) {
    msg->AppendVarInt(6, tracing_sessions_);
  }

  // Field 7: total_buffers
  if (_has_field_[7]) {
    msg->AppendVarInt(7, total_buffers_);
  }

  // Field 8: chunks_discarded
  if (_has_field_[8]) {
    msg->AppendVarInt(8, chunks_discarded_);
  }

  // Field 9: patches_discarded
  if (_has_field_[9]) {
    msg->AppendVarInt(9, patches_discarded_);
  }

  // Field 10: invalid_packets
  if (_has_field_[10]) {
    msg->AppendVarInt(10, invalid_packets_);
  }

  // Field 11: filter_stats
  if (_has_field_[11]) {
    (*filter_stats_).Serialize(msg->BeginNestedMessage<::protozero::Message>(11));
  }

  // Field 12: flushes_requested
  if (_has_field_[12]) {
    msg->AppendVarInt(12, flushes_requested_);
  }

  // Field 13: flushes_succeeded
  if (_has_field_[13]) {
    msg->AppendVarInt(13, flushes_succeeded_);
  }

  // Field 14: flushes_failed
  if (_has_field_[14]) {
    msg->AppendVarInt(14, flushes_failed_);
  }

  // Field 15: final_flush_outcome
  if (_has_field_[15]) {
    msg->AppendVarInt(15, final_flush_outcome_);
  }

  msg->AppendRawProtoBytes(unknown_fields_.data(), unknown_fields_.size());
}


TraceStats_FilterStats::TraceStats_FilterStats() = default;
TraceStats_FilterStats::~TraceStats_FilterStats() = default;
TraceStats_FilterStats::TraceStats_FilterStats(const TraceStats_FilterStats&) = default;
TraceStats_FilterStats& TraceStats_FilterStats::operator=(const TraceStats_FilterStats&) = default;
TraceStats_FilterStats::TraceStats_FilterStats(TraceStats_FilterStats&&) noexcept = default;
TraceStats_FilterStats& TraceStats_FilterStats::operator=(TraceStats_FilterStats&&) = default;

bool TraceStats_FilterStats::operator==(const TraceStats_FilterStats& other) const {
  return unknown_fields_ == other.unknown_fields_
   && input_packets_ == other.input_packets_
   && input_bytes_ == other.input_bytes_
   && output_bytes_ == other.output_bytes_
   && errors_ == other.errors_;
}

bool TraceStats_FilterStats::ParseFromArray(const void* raw, size_t size) {
  unknown_fields_.clear();
  bool packed_error = false;

  ::protozero::ProtoDecoder dec(raw, size);
  for (auto field = dec.ReadField(); field.valid(); field = dec.ReadField()) {
    if (field.id() < _has_field_.size()) {
      _has_field_.set(field.id());
    }
    switch (field.id()) {
      case 1 /* input_packets */:
        field.get(&input_packets_);
        break;
      case 2 /* input_bytes */:
        field.get(&input_bytes_);
        break;
      case 3 /* output_bytes */:
        field.get(&output_bytes_);
        break;
      case 4 /* errors */:
        field.get(&errors_);
        break;
      default:
        field.SerializeAndAppendTo(&unknown_fields_);
        break;
    }
  }
  return !packed_error && !dec.bytes_left();
}

std::string TraceStats_FilterStats::SerializeAsString() const {
  ::protozero::HeapBuffered<::protozero::Message> msg;
  Serialize(msg.get());
  return msg.SerializeAsString();
}

std::vector<uint8_t> TraceStats_FilterStats::SerializeAsArray() const {
  ::protozero::HeapBuffered<::protozero::Message> msg;
  Serialize(msg.get());
  return msg.SerializeAsArray();
}

void TraceStats_FilterStats::Serialize(::protozero::Message* msg) const {
  // Field 1: input_packets
  if (_has_field_[1]) {
    msg->AppendVarInt(1, input_packets_);
  }

  // Field 2: input_bytes
  if (_has_field_[2]) {
    msg->AppendVarInt(2, input_bytes_);
  }

  // Field 3: output_bytes
  if (_has_field_[3]) {
    msg->AppendVarInt(3, output_bytes_);
  }

  // Field 4: errors
  if (_has_field_[4]) {
    msg->AppendVarInt(4, errors_);
  }

  msg->AppendRawProtoBytes(unknown_fields_.data(), unknown_fields_.size());
}


TraceStats_BufferStats::TraceStats_BufferStats() = default;
TraceStats_BufferStats::~TraceStats_BufferStats() = default;
TraceStats_BufferStats::TraceStats_BufferStats(const TraceStats_BufferStats&) = default;
TraceStats_BufferStats& TraceStats_BufferStats::operator=(const TraceStats_BufferStats&) = default;
TraceStats_BufferStats::TraceStats_BufferStats(TraceStats_BufferStats&&) noexcept = default;
TraceStats_BufferStats& TraceStats_BufferStats::operator=(TraceStats_BufferStats&&) = default;

bool TraceStats_BufferStats::operator==(const TraceStats_BufferStats& other) const {
  return unknown_fields_ == other.unknown_fields_
   && buffer_size_ == other.buffer_size_
   && bytes_written_ == other.bytes_written_
   && bytes_overwritten_ == other.bytes_overwritten_
   && bytes_read_ == other.bytes_read_
   && padding_bytes_written_ == other.padding_bytes_written_
   && padding_bytes_cleared_ == other.padding_bytes_cleared_
   && chunks_written_ == other.chunks_written_
   && chunks_rewritten_ == other.chunks_rewritten_
   && chunks_overwritten_ == other.chunks_overwritten_
   && chunks_discarded_ == other.chunks_discarded_
   && chunks_read_ == other.chunks_read_
   && chunks_committed_out_of_order_ == other.chunks_committed_out_of_order_
   && write_wrap_count_ == other.write_wrap_count_
   && patches_succeeded_ == other.patches_succeeded_
   && patches_failed_ == other.patches_failed_
   && readaheads_succeeded_ == other.readaheads_succeeded_
   && readaheads_failed_ == other.readaheads_failed_
   && abi_violations_ == other.abi_violations_
   && trace_writer_packet_loss_ == other.trace_writer_packet_loss_;
}

bool TraceStats_BufferStats::ParseFromArray(const void* raw, size_t size) {
  unknown_fields_.clear();
  bool packed_error = false;

  ::protozero::ProtoDecoder dec(raw, size);
  for (auto field = dec.ReadField(); field.valid(); field = dec.ReadField()) {
    if (field.id() < _has_field_.size()) {
      _has_field_.set(field.id());
    }
    switch (field.id()) {
      case 12 /* buffer_size */:
        field.get(&buffer_size_);
        break;
      case 1 /* bytes_written */:
        field.get(&bytes_written_);
        break;
      case 13 /* bytes_overwritten */:
        field.get(&bytes_overwritten_);
        break;
      case 14 /* bytes_read */:
        field.get(&bytes_read_);
        break;
      case 15 /* padding_bytes_written */:
        field.get(&padding_bytes_written_);
        break;
      case 16 /* padding_bytes_cleared */:
        field.get(&padding_bytes_cleared_);
        break;
      case 2 /* chunks_written */:
        field.get(&chunks_written_);
        break;
      case 10 /* chunks_rewritten */:
        field.get(&chunks_rewritten_);
        break;
      case 3 /* chunks_overwritten */:
        field.get(&chunks_overwritten_);
        break;
      case 18 /* chunks_discarded */:
        field.get(&chunks_discarded_);
        break;
      case 17 /* chunks_read */:
        field.get(&chunks_read_);
        break;
      case 11 /* chunks_committed_out_of_order */:
        field.get(&chunks_committed_out_of_order_);
        break;
      case 4 /* write_wrap_count */:
        field.get(&write_wrap_count_);
        break;
      case 5 /* patches_succeeded */:
        field.get(&patches_succeeded_);
        break;
      case 6 /* patches_failed */:
        field.get(&patches_failed_);
        break;
      case 7 /* readaheads_succeeded */:
        field.get(&readaheads_succeeded_);
        break;
      case 8 /* readaheads_failed */:
        field.get(&readaheads_failed_);
        break;
      case 9 /* abi_violations */:
        field.get(&abi_violations_);
        break;
      case 19 /* trace_writer_packet_loss */:
        field.get(&trace_writer_packet_loss_);
        break;
      default:
        field.SerializeAndAppendTo(&unknown_fields_);
        break;
    }
  }
  return !packed_error && !dec.bytes_left();
}

std::string TraceStats_BufferStats::SerializeAsString() const {
  ::protozero::HeapBuffered<::protozero::Message> msg;
  Serialize(msg.get());
  return msg.SerializeAsString();
}

std::vector<uint8_t> TraceStats_BufferStats::SerializeAsArray() const {
  ::protozero::HeapBuffered<::protozero::Message> msg;
  Serialize(msg.get());
  return msg.SerializeAsArray();
}

void TraceStats_BufferStats::Serialize(::protozero::Message* msg) const {
  // Field 12: buffer_size
  if (_has_field_[12]) {
    msg->AppendVarInt(12, buffer_size_);
  }

  // Field 1: bytes_written
  if (_has_field_[1]) {
    msg->AppendVarInt(1, bytes_written_);
  }

  // Field 13: bytes_overwritten
  if (_has_field_[13]) {
    msg->AppendVarInt(13, bytes_overwritten_);
  }

  // Field 14: bytes_read
  if (_has_field_[14]) {
    msg->AppendVarInt(14, bytes_read_);
  }

  // Field 15: padding_bytes_written
  if (_has_field_[15]) {
    msg->AppendVarInt(15, padding_bytes_written_);
  }

  // Field 16: padding_bytes_cleared
  if (_has_field_[16]) {
    msg->AppendVarInt(16, padding_bytes_cleared_);
  }

  // Field 2: chunks_written
  if (_has_field_[2]) {
    msg->AppendVarInt(2, chunks_written_);
  }

  // Field 10: chunks_rewritten
  if (_has_field_[10]) {
    msg->AppendVarInt(10, chunks_rewritten_);
  }

  // Field 3: chunks_overwritten
  if (_has_field_[3]) {
    msg->AppendVarInt(3, chunks_overwritten_);
  }

  // Field 18: chunks_discarded
  if (_has_field_[18]) {
    msg->AppendVarInt(18, chunks_discarded_);
  }

  // Field 17: chunks_read
  if (_has_field_[17]) {
    msg->AppendVarInt(17, chunks_read_);
  }

  // Field 11: chunks_committed_out_of_order
  if (_has_field_[11]) {
    msg->AppendVarInt(11, chunks_committed_out_of_order_);
  }

  // Field 4: write_wrap_count
  if (_has_field_[4]) {
    msg->AppendVarInt(4, write_wrap_count_);
  }

  // Field 5: patches_succeeded
  if (_has_field_[5]) {
    msg->AppendVarInt(5, patches_succeeded_);
  }

  // Field 6: patches_failed
  if (_has_field_[6]) {
    msg->AppendVarInt(6, patches_failed_);
  }

  // Field 7: readaheads_succeeded
  if (_has_field_[7]) {
    msg->AppendVarInt(7, readaheads_succeeded_);
  }

  // Field 8: readaheads_failed
  if (_has_field_[8]) {
    msg->AppendVarInt(8, readaheads_failed_);
  }

  // Field 9: abi_violations
  if (_has_field_[9]) {
    msg->AppendVarInt(9, abi_violations_);
  }

  // Field 19: trace_writer_packet_loss
  if (_has_field_[19]) {
    msg->AppendVarInt(19, trace_writer_packet_loss_);
  }

  msg->AppendRawProtoBytes(unknown_fields_.data(), unknown_fields_.size());
}

}  // namespace perfetto
}  // namespace protos
}  // namespace gen
#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic pop
#endif
