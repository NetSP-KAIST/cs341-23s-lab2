#include "perfetto/protozero/message.h"
#include "perfetto/protozero/packed_repeated_fields.h"
#include "perfetto/protozero/proto_decoder.h"
#include "perfetto/protozero/scattered_heap_buffer.h"
// DO NOT EDIT. Autogenerated by Perfetto cppgen_plugin
#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wfloat-equal"
#endif
#include "protos/perfetto/config/data_source_config.gen.h"
#include "protos/perfetto/config/system_info/system_info.gen.h"
#include "protos/perfetto/config/test_config.gen.h"
#include "protos/perfetto/config/interceptor_config.gen.h"
#include "protos/perfetto/config/interceptors/console_config.gen.h"
#include "protos/perfetto/config/chrome/chrome_config.gen.h"

namespace perfetto {
namespace protos {
namespace gen {

DataSourceConfig::DataSourceConfig() = default;
DataSourceConfig::~DataSourceConfig() = default;
DataSourceConfig::DataSourceConfig(const DataSourceConfig&) = default;
DataSourceConfig& DataSourceConfig::operator=(const DataSourceConfig&) = default;
DataSourceConfig::DataSourceConfig(DataSourceConfig&&) noexcept = default;
DataSourceConfig& DataSourceConfig::operator=(DataSourceConfig&&) = default;

bool DataSourceConfig::operator==(const DataSourceConfig& other) const {
  return unknown_fields_ == other.unknown_fields_
   && name_ == other.name_
   && target_buffer_ == other.target_buffer_
   && trace_duration_ms_ == other.trace_duration_ms_
   && stop_timeout_ms_ == other.stop_timeout_ms_
   && enable_extra_guardrails_ == other.enable_extra_guardrails_
   && session_initiator_ == other.session_initiator_
   && tracing_session_id_ == other.tracing_session_id_
   && ftrace_config_ == other.ftrace_config_
   && inode_file_config_ == other.inode_file_config_
   && process_stats_config_ == other.process_stats_config_
   && sys_stats_config_ == other.sys_stats_config_
   && heapprofd_config_ == other.heapprofd_config_
   && java_hprof_config_ == other.java_hprof_config_
   && android_power_config_ == other.android_power_config_
   && android_log_config_ == other.android_log_config_
   && gpu_counter_config_ == other.gpu_counter_config_
   && android_game_intervention_list_config_ == other.android_game_intervention_list_config_
   && packages_list_config_ == other.packages_list_config_
   && perf_event_config_ == other.perf_event_config_
   && vulkan_memory_config_ == other.vulkan_memory_config_
   && track_event_config_ == other.track_event_config_
   && android_polled_state_config_ == other.android_polled_state_config_
   && android_system_property_config_ == other.android_system_property_config_
   && statsd_tracing_config_ == other.statsd_tracing_config_
   && system_info_config_ == other.system_info_config_
   && chrome_config_ == other.chrome_config_
   && interceptor_config_ == other.interceptor_config_
   && network_packet_trace_config_ == other.network_packet_trace_config_
   && legacy_config_ == other.legacy_config_
   && for_testing_ == other.for_testing_;
}

bool DataSourceConfig::ParseFromArray(const void* raw, size_t size) {
  unknown_fields_.clear();
  bool packed_error = false;

  ::protozero::ProtoDecoder dec(raw, size);
  for (auto field = dec.ReadField(); field.valid(); field = dec.ReadField()) {
    if (field.id() < _has_field_.size()) {
      _has_field_.set(field.id());
    }
    switch (field.id()) {
      case 1 /* name */:
        field.get(&name_);
        break;
      case 2 /* target_buffer */:
        field.get(&target_buffer_);
        break;
      case 3 /* trace_duration_ms */:
        field.get(&trace_duration_ms_);
        break;
      case 7 /* stop_timeout_ms */:
        field.get(&stop_timeout_ms_);
        break;
      case 6 /* enable_extra_guardrails */:
        field.get(&enable_extra_guardrails_);
        break;
      case 8 /* session_initiator */:
        field.get(&session_initiator_);
        break;
      case 4 /* tracing_session_id */:
        field.get(&tracing_session_id_);
        break;
      case 100 /* ftrace_config */:
        ftrace_config_ = field.as_std_string();
        break;
      case 102 /* inode_file_config */:
        inode_file_config_ = field.as_std_string();
        break;
      case 103 /* process_stats_config */:
        process_stats_config_ = field.as_std_string();
        break;
      case 104 /* sys_stats_config */:
        sys_stats_config_ = field.as_std_string();
        break;
      case 105 /* heapprofd_config */:
        heapprofd_config_ = field.as_std_string();
        break;
      case 110 /* java_hprof_config */:
        java_hprof_config_ = field.as_std_string();
        break;
      case 106 /* android_power_config */:
        android_power_config_ = field.as_std_string();
        break;
      case 107 /* android_log_config */:
        android_log_config_ = field.as_std_string();
        break;
      case 108 /* gpu_counter_config */:
        gpu_counter_config_ = field.as_std_string();
        break;
      case 116 /* android_game_intervention_list_config */:
        android_game_intervention_list_config_ = field.as_std_string();
        break;
      case 109 /* packages_list_config */:
        packages_list_config_ = field.as_std_string();
        break;
      case 111 /* perf_event_config */:
        perf_event_config_ = field.as_std_string();
        break;
      case 112 /* vulkan_memory_config */:
        vulkan_memory_config_ = field.as_std_string();
        break;
      case 113 /* track_event_config */:
        track_event_config_ = field.as_std_string();
        break;
      case 114 /* android_polled_state_config */:
        android_polled_state_config_ = field.as_std_string();
        break;
      case 118 /* android_system_property_config */:
        android_system_property_config_ = field.as_std_string();
        break;
      case 117 /* statsd_tracing_config */:
        statsd_tracing_config_ = field.as_std_string();
        break;
      case 119 /* system_info_config */:
        (*system_info_config_).ParseFromArray(field.data(), field.size());
        break;
      case 101 /* chrome_config */:
        (*chrome_config_).ParseFromArray(field.data(), field.size());
        break;
      case 115 /* interceptor_config */:
        (*interceptor_config_).ParseFromArray(field.data(), field.size());
        break;
      case 120 /* network_packet_trace_config */:
        network_packet_trace_config_ = field.as_std_string();
        break;
      case 1000 /* legacy_config */:
        field.get(&legacy_config_);
        break;
      case 1001 /* for_testing */:
        (*for_testing_).ParseFromArray(field.data(), field.size());
        break;
      default:
        field.SerializeAndAppendTo(&unknown_fields_);
        break;
    }
  }
  return !packed_error && !dec.bytes_left();
}

std::string DataSourceConfig::SerializeAsString() const {
  ::protozero::HeapBuffered<::protozero::Message> msg;
  Serialize(msg.get());
  return msg.SerializeAsString();
}

std::vector<uint8_t> DataSourceConfig::SerializeAsArray() const {
  ::protozero::HeapBuffered<::protozero::Message> msg;
  Serialize(msg.get());
  return msg.SerializeAsArray();
}

void DataSourceConfig::Serialize(::protozero::Message* msg) const {
  // Field 1: name
  if (_has_field_[1]) {
    msg->AppendString(1, name_);
  }

  // Field 2: target_buffer
  if (_has_field_[2]) {
    msg->AppendVarInt(2, target_buffer_);
  }

  // Field 3: trace_duration_ms
  if (_has_field_[3]) {
    msg->AppendVarInt(3, trace_duration_ms_);
  }

  // Field 7: stop_timeout_ms
  if (_has_field_[7]) {
    msg->AppendVarInt(7, stop_timeout_ms_);
  }

  // Field 6: enable_extra_guardrails
  if (_has_field_[6]) {
    msg->AppendTinyVarInt(6, enable_extra_guardrails_);
  }

  // Field 8: session_initiator
  if (_has_field_[8]) {
    msg->AppendVarInt(8, session_initiator_);
  }

  // Field 4: tracing_session_id
  if (_has_field_[4]) {
    msg->AppendVarInt(4, tracing_session_id_);
  }

  // Field 100: ftrace_config
  if (_has_field_[100]) {
    msg->AppendString(100, ftrace_config_);
  }

  // Field 102: inode_file_config
  if (_has_field_[102]) {
    msg->AppendString(102, inode_file_config_);
  }

  // Field 103: process_stats_config
  if (_has_field_[103]) {
    msg->AppendString(103, process_stats_config_);
  }

  // Field 104: sys_stats_config
  if (_has_field_[104]) {
    msg->AppendString(104, sys_stats_config_);
  }

  // Field 105: heapprofd_config
  if (_has_field_[105]) {
    msg->AppendString(105, heapprofd_config_);
  }

  // Field 110: java_hprof_config
  if (_has_field_[110]) {
    msg->AppendString(110, java_hprof_config_);
  }

  // Field 106: android_power_config
  if (_has_field_[106]) {
    msg->AppendString(106, android_power_config_);
  }

  // Field 107: android_log_config
  if (_has_field_[107]) {
    msg->AppendString(107, android_log_config_);
  }

  // Field 108: gpu_counter_config
  if (_has_field_[108]) {
    msg->AppendString(108, gpu_counter_config_);
  }

  // Field 116: android_game_intervention_list_config
  if (_has_field_[116]) {
    msg->AppendString(116, android_game_intervention_list_config_);
  }

  // Field 109: packages_list_config
  if (_has_field_[109]) {
    msg->AppendString(109, packages_list_config_);
  }

  // Field 111: perf_event_config
  if (_has_field_[111]) {
    msg->AppendString(111, perf_event_config_);
  }

  // Field 112: vulkan_memory_config
  if (_has_field_[112]) {
    msg->AppendString(112, vulkan_memory_config_);
  }

  // Field 113: track_event_config
  if (_has_field_[113]) {
    msg->AppendString(113, track_event_config_);
  }

  // Field 114: android_polled_state_config
  if (_has_field_[114]) {
    msg->AppendString(114, android_polled_state_config_);
  }

  // Field 118: android_system_property_config
  if (_has_field_[118]) {
    msg->AppendString(118, android_system_property_config_);
  }

  // Field 117: statsd_tracing_config
  if (_has_field_[117]) {
    msg->AppendString(117, statsd_tracing_config_);
  }

  // Field 119: system_info_config
  if (_has_field_[119]) {
    (*system_info_config_).Serialize(msg->BeginNestedMessage<::protozero::Message>(119));
  }

  // Field 101: chrome_config
  if (_has_field_[101]) {
    (*chrome_config_).Serialize(msg->BeginNestedMessage<::protozero::Message>(101));
  }

  // Field 115: interceptor_config
  if (_has_field_[115]) {
    (*interceptor_config_).Serialize(msg->BeginNestedMessage<::protozero::Message>(115));
  }

  // Field 120: network_packet_trace_config
  if (_has_field_[120]) {
    msg->AppendString(120, network_packet_trace_config_);
  }

  // Field 1000: legacy_config
  if (_has_field_[1000]) {
    msg->AppendString(1000, legacy_config_);
  }

  // Field 1001: for_testing
  if (_has_field_[1001]) {
    (*for_testing_).Serialize(msg->BeginNestedMessage<::protozero::Message>(1001));
  }

  msg->AppendRawProtoBytes(unknown_fields_.data(), unknown_fields_.size());
}

}  // namespace perfetto
}  // namespace protos
}  // namespace gen
#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic pop
#endif
