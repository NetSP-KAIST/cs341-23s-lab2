// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#ifndef PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_CHROME_CHROME_METADATA_PROTO_H_
#define PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_CHROME_CHROME_METADATA_PROTO_H_

#include <stddef.h>
#include <stdint.h>

#include "perfetto/protozero/field_writer.h"
#include "perfetto/protozero/message.h"
#include "perfetto/protozero/packed_repeated_fields.h"
#include "perfetto/protozero/proto_decoder.h"
#include "perfetto/protozero/proto_utils.h"

namespace perfetto {
namespace protos {
namespace pbzero {

class BackgroundTracingMetadata;
class BackgroundTracingMetadata_TriggerRule;
class BackgroundTracingMetadata_TriggerRule_HistogramRule;
class BackgroundTracingMetadata_TriggerRule_NamedRule;
namespace perfetto_pbzero_enum_BackgroundTracingMetadata_TriggerRule_NamedRule {
enum EventType : int32_t;
}  // namespace perfetto_pbzero_enum_BackgroundTracingMetadata_TriggerRule_NamedRule
using BackgroundTracingMetadata_TriggerRule_NamedRule_EventType = perfetto_pbzero_enum_BackgroundTracingMetadata_TriggerRule_NamedRule::EventType;
namespace perfetto_pbzero_enum_BackgroundTracingMetadata_TriggerRule {
enum TriggerType : int32_t;
}  // namespace perfetto_pbzero_enum_BackgroundTracingMetadata_TriggerRule
using BackgroundTracingMetadata_TriggerRule_TriggerType = perfetto_pbzero_enum_BackgroundTracingMetadata_TriggerRule::TriggerType;

namespace perfetto_pbzero_enum_BackgroundTracingMetadata_TriggerRule {
enum TriggerType : int32_t {
  TRIGGER_UNSPECIFIED = 0,
  MONITOR_AND_DUMP_WHEN_SPECIFIC_HISTOGRAM_AND_VALUE = 1,
  MONITOR_AND_DUMP_WHEN_TRIGGER_NAMED = 2,
};
} // namespace perfetto_pbzero_enum_BackgroundTracingMetadata_TriggerRule
using BackgroundTracingMetadata_TriggerRule_TriggerType = perfetto_pbzero_enum_BackgroundTracingMetadata_TriggerRule::TriggerType;


constexpr BackgroundTracingMetadata_TriggerRule_TriggerType BackgroundTracingMetadata_TriggerRule_TriggerType_MIN = BackgroundTracingMetadata_TriggerRule_TriggerType::TRIGGER_UNSPECIFIED;
constexpr BackgroundTracingMetadata_TriggerRule_TriggerType BackgroundTracingMetadata_TriggerRule_TriggerType_MAX = BackgroundTracingMetadata_TriggerRule_TriggerType::MONITOR_AND_DUMP_WHEN_TRIGGER_NAMED;


PERFETTO_PROTOZERO_CONSTEXPR14_OR_INLINE
const char* BackgroundTracingMetadata_TriggerRule_TriggerType_Name(::perfetto::protos::pbzero::BackgroundTracingMetadata_TriggerRule_TriggerType value) {
  switch (value) {
  case ::perfetto::protos::pbzero::BackgroundTracingMetadata_TriggerRule_TriggerType::TRIGGER_UNSPECIFIED:
    return "TRIGGER_UNSPECIFIED";

  case ::perfetto::protos::pbzero::BackgroundTracingMetadata_TriggerRule_TriggerType::MONITOR_AND_DUMP_WHEN_SPECIFIC_HISTOGRAM_AND_VALUE:
    return "MONITOR_AND_DUMP_WHEN_SPECIFIC_HISTOGRAM_AND_VALUE";

  case ::perfetto::protos::pbzero::BackgroundTracingMetadata_TriggerRule_TriggerType::MONITOR_AND_DUMP_WHEN_TRIGGER_NAMED:
    return "MONITOR_AND_DUMP_WHEN_TRIGGER_NAMED";
  }
  return "PBZERO_UNKNOWN_ENUM_VALUE";
}

namespace perfetto_pbzero_enum_BackgroundTracingMetadata_TriggerRule_NamedRule {
enum EventType : int32_t {
  UNSPECIFIED = 0,
  SESSION_RESTORE = 1,
  NAVIGATION = 2,
  STARTUP = 3,
  REACHED_CODE = 4,
  CONTENT_TRIGGER = 5,
  TEST_RULE = 1000,
};
} // namespace perfetto_pbzero_enum_BackgroundTracingMetadata_TriggerRule_NamedRule
using BackgroundTracingMetadata_TriggerRule_NamedRule_EventType = perfetto_pbzero_enum_BackgroundTracingMetadata_TriggerRule_NamedRule::EventType;


constexpr BackgroundTracingMetadata_TriggerRule_NamedRule_EventType BackgroundTracingMetadata_TriggerRule_NamedRule_EventType_MIN = BackgroundTracingMetadata_TriggerRule_NamedRule_EventType::UNSPECIFIED;
constexpr BackgroundTracingMetadata_TriggerRule_NamedRule_EventType BackgroundTracingMetadata_TriggerRule_NamedRule_EventType_MAX = BackgroundTracingMetadata_TriggerRule_NamedRule_EventType::TEST_RULE;


PERFETTO_PROTOZERO_CONSTEXPR14_OR_INLINE
const char* BackgroundTracingMetadata_TriggerRule_NamedRule_EventType_Name(::perfetto::protos::pbzero::BackgroundTracingMetadata_TriggerRule_NamedRule_EventType value) {
  switch (value) {
  case ::perfetto::protos::pbzero::BackgroundTracingMetadata_TriggerRule_NamedRule_EventType::UNSPECIFIED:
    return "UNSPECIFIED";

  case ::perfetto::protos::pbzero::BackgroundTracingMetadata_TriggerRule_NamedRule_EventType::SESSION_RESTORE:
    return "SESSION_RESTORE";

  case ::perfetto::protos::pbzero::BackgroundTracingMetadata_TriggerRule_NamedRule_EventType::NAVIGATION:
    return "NAVIGATION";

  case ::perfetto::protos::pbzero::BackgroundTracingMetadata_TriggerRule_NamedRule_EventType::STARTUP:
    return "STARTUP";

  case ::perfetto::protos::pbzero::BackgroundTracingMetadata_TriggerRule_NamedRule_EventType::REACHED_CODE:
    return "REACHED_CODE";

  case ::perfetto::protos::pbzero::BackgroundTracingMetadata_TriggerRule_NamedRule_EventType::CONTENT_TRIGGER:
    return "CONTENT_TRIGGER";

  case ::perfetto::protos::pbzero::BackgroundTracingMetadata_TriggerRule_NamedRule_EventType::TEST_RULE:
    return "TEST_RULE";
  }
  return "PBZERO_UNKNOWN_ENUM_VALUE";
}

class BackgroundTracingMetadata_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/3, /*HAS_NONPACKED_REPEATED_FIELDS=*/true> {
 public:
  BackgroundTracingMetadata_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit BackgroundTracingMetadata_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit BackgroundTracingMetadata_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_triggered_rule() const { return at<1>().valid(); }
  ::protozero::ConstBytes triggered_rule() const { return at<1>().as_bytes(); }
  bool has_active_rules() const { return at<2>().valid(); }
  ::protozero::RepeatedFieldIterator<::protozero::ConstBytes> active_rules() const { return GetRepeated<::protozero::ConstBytes>(2); }
  bool has_scenario_name_hash() const { return at<3>().valid(); }
  uint32_t scenario_name_hash() const { return at<3>().as_uint32(); }
};

class BackgroundTracingMetadata : public ::protozero::Message {
 public:
  using Decoder = BackgroundTracingMetadata_Decoder;
  enum : int32_t {
    kTriggeredRuleFieldNumber = 1,
    kActiveRulesFieldNumber = 2,
    kScenarioNameHashFieldNumber = 3,
  };
  static constexpr const char* GetName() { return ".perfetto.protos.BackgroundTracingMetadata"; }

  using TriggerRule = ::perfetto::protos::pbzero::BackgroundTracingMetadata_TriggerRule;

  using FieldMetadata_TriggeredRule =
    ::protozero::proto_utils::FieldMetadata<
      1,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kMessage,
      BackgroundTracingMetadata_TriggerRule,
      BackgroundTracingMetadata>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.
  static constexpr FieldMetadata_TriggeredRule kTriggeredRule() { return {}; }
  template <typename T = BackgroundTracingMetadata_TriggerRule> T* set_triggered_rule() {
    return BeginNestedMessage<T>(1);
  }


  using FieldMetadata_ActiveRules =
    ::protozero::proto_utils::FieldMetadata<
      2,
      ::protozero::proto_utils::RepetitionType::kRepeatedNotPacked,
      ::protozero::proto_utils::ProtoSchemaType::kMessage,
      BackgroundTracingMetadata_TriggerRule,
      BackgroundTracingMetadata>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.
  static constexpr FieldMetadata_ActiveRules kActiveRules() { return {}; }
  template <typename T = BackgroundTracingMetadata_TriggerRule> T* add_active_rules() {
    return BeginNestedMessage<T>(2);
  }


  using FieldMetadata_ScenarioNameHash =
    ::protozero::proto_utils::FieldMetadata<
      3,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kFixed32,
      uint32_t,
      BackgroundTracingMetadata>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.
  static constexpr FieldMetadata_ScenarioNameHash kScenarioNameHash() { return {}; }
  void set_scenario_name_hash(uint32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_ScenarioNameHash::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kFixed32>
        ::Append(*this, field_id, value);
  }
};

class BackgroundTracingMetadata_TriggerRule_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/4, /*HAS_NONPACKED_REPEATED_FIELDS=*/false> {
 public:
  BackgroundTracingMetadata_TriggerRule_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit BackgroundTracingMetadata_TriggerRule_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit BackgroundTracingMetadata_TriggerRule_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_trigger_type() const { return at<1>().valid(); }
  int32_t trigger_type() const { return at<1>().as_int32(); }
  bool has_histogram_rule() const { return at<2>().valid(); }
  ::protozero::ConstBytes histogram_rule() const { return at<2>().as_bytes(); }
  bool has_named_rule() const { return at<3>().valid(); }
  ::protozero::ConstBytes named_rule() const { return at<3>().as_bytes(); }
  bool has_name_hash() const { return at<4>().valid(); }
  uint32_t name_hash() const { return at<4>().as_uint32(); }
};

class BackgroundTracingMetadata_TriggerRule : public ::protozero::Message {
 public:
  using Decoder = BackgroundTracingMetadata_TriggerRule_Decoder;
  enum : int32_t {
    kTriggerTypeFieldNumber = 1,
    kHistogramRuleFieldNumber = 2,
    kNamedRuleFieldNumber = 3,
    kNameHashFieldNumber = 4,
  };
  static constexpr const char* GetName() { return ".perfetto.protos.BackgroundTracingMetadata.TriggerRule"; }

  using HistogramRule = ::perfetto::protos::pbzero::BackgroundTracingMetadata_TriggerRule_HistogramRule;
  using NamedRule = ::perfetto::protos::pbzero::BackgroundTracingMetadata_TriggerRule_NamedRule;

  using TriggerType = ::perfetto::protos::pbzero::BackgroundTracingMetadata_TriggerRule_TriggerType;
  static inline const char* TriggerType_Name(TriggerType value) {
    return ::perfetto::protos::pbzero::BackgroundTracingMetadata_TriggerRule_TriggerType_Name(value);
  }
  static const TriggerType TRIGGER_UNSPECIFIED = TriggerType::TRIGGER_UNSPECIFIED;
  static const TriggerType MONITOR_AND_DUMP_WHEN_SPECIFIC_HISTOGRAM_AND_VALUE = TriggerType::MONITOR_AND_DUMP_WHEN_SPECIFIC_HISTOGRAM_AND_VALUE;
  static const TriggerType MONITOR_AND_DUMP_WHEN_TRIGGER_NAMED = TriggerType::MONITOR_AND_DUMP_WHEN_TRIGGER_NAMED;

  using FieldMetadata_TriggerType =
    ::protozero::proto_utils::FieldMetadata<
      1,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kEnum,
      ::perfetto::protos::pbzero::BackgroundTracingMetadata_TriggerRule_TriggerType,
      BackgroundTracingMetadata_TriggerRule>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.
  static constexpr FieldMetadata_TriggerType kTriggerType() { return {}; }
  void set_trigger_type(::perfetto::protos::pbzero::BackgroundTracingMetadata_TriggerRule_TriggerType value) {
    static constexpr uint32_t field_id = FieldMetadata_TriggerType::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kEnum>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_HistogramRule =
    ::protozero::proto_utils::FieldMetadata<
      2,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kMessage,
      BackgroundTracingMetadata_TriggerRule_HistogramRule,
      BackgroundTracingMetadata_TriggerRule>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.
  static constexpr FieldMetadata_HistogramRule kHistogramRule() { return {}; }
  template <typename T = BackgroundTracingMetadata_TriggerRule_HistogramRule> T* set_histogram_rule() {
    return BeginNestedMessage<T>(2);
  }


  using FieldMetadata_NamedRule =
    ::protozero::proto_utils::FieldMetadata<
      3,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kMessage,
      BackgroundTracingMetadata_TriggerRule_NamedRule,
      BackgroundTracingMetadata_TriggerRule>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.
  static constexpr FieldMetadata_NamedRule kNamedRule() { return {}; }
  template <typename T = BackgroundTracingMetadata_TriggerRule_NamedRule> T* set_named_rule() {
    return BeginNestedMessage<T>(3);
  }


  using FieldMetadata_NameHash =
    ::protozero::proto_utils::FieldMetadata<
      4,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kFixed32,
      uint32_t,
      BackgroundTracingMetadata_TriggerRule>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.
  static constexpr FieldMetadata_NameHash kNameHash() { return {}; }
  void set_name_hash(uint32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_NameHash::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kFixed32>
        ::Append(*this, field_id, value);
  }
};

class BackgroundTracingMetadata_TriggerRule_NamedRule_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/2, /*HAS_NONPACKED_REPEATED_FIELDS=*/false> {
 public:
  BackgroundTracingMetadata_TriggerRule_NamedRule_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit BackgroundTracingMetadata_TriggerRule_NamedRule_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit BackgroundTracingMetadata_TriggerRule_NamedRule_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_event_type() const { return at<1>().valid(); }
  int32_t event_type() const { return at<1>().as_int32(); }
  bool has_content_trigger_name_hash() const { return at<2>().valid(); }
  uint64_t content_trigger_name_hash() const { return at<2>().as_uint64(); }
};

class BackgroundTracingMetadata_TriggerRule_NamedRule : public ::protozero::Message {
 public:
  using Decoder = BackgroundTracingMetadata_TriggerRule_NamedRule_Decoder;
  enum : int32_t {
    kEventTypeFieldNumber = 1,
    kContentTriggerNameHashFieldNumber = 2,
  };
  static constexpr const char* GetName() { return ".perfetto.protos.BackgroundTracingMetadata.TriggerRule.NamedRule"; }


  using EventType = ::perfetto::protos::pbzero::BackgroundTracingMetadata_TriggerRule_NamedRule_EventType;
  static inline const char* EventType_Name(EventType value) {
    return ::perfetto::protos::pbzero::BackgroundTracingMetadata_TriggerRule_NamedRule_EventType_Name(value);
  }
  static const EventType UNSPECIFIED = EventType::UNSPECIFIED;
  static const EventType SESSION_RESTORE = EventType::SESSION_RESTORE;
  static const EventType NAVIGATION = EventType::NAVIGATION;
  static const EventType STARTUP = EventType::STARTUP;
  static const EventType REACHED_CODE = EventType::REACHED_CODE;
  static const EventType CONTENT_TRIGGER = EventType::CONTENT_TRIGGER;
  static const EventType TEST_RULE = EventType::TEST_RULE;

  using FieldMetadata_EventType =
    ::protozero::proto_utils::FieldMetadata<
      1,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kEnum,
      ::perfetto::protos::pbzero::BackgroundTracingMetadata_TriggerRule_NamedRule_EventType,
      BackgroundTracingMetadata_TriggerRule_NamedRule>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.
  static constexpr FieldMetadata_EventType kEventType() { return {}; }
  void set_event_type(::perfetto::protos::pbzero::BackgroundTracingMetadata_TriggerRule_NamedRule_EventType value) {
    static constexpr uint32_t field_id = FieldMetadata_EventType::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kEnum>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_ContentTriggerNameHash =
    ::protozero::proto_utils::FieldMetadata<
      2,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kFixed64,
      uint64_t,
      BackgroundTracingMetadata_TriggerRule_NamedRule>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.
  static constexpr FieldMetadata_ContentTriggerNameHash kContentTriggerNameHash() { return {}; }
  void set_content_trigger_name_hash(uint64_t value) {
    static constexpr uint32_t field_id = FieldMetadata_ContentTriggerNameHash::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kFixed64>
        ::Append(*this, field_id, value);
  }
};

class BackgroundTracingMetadata_TriggerRule_HistogramRule_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/3, /*HAS_NONPACKED_REPEATED_FIELDS=*/false> {
 public:
  BackgroundTracingMetadata_TriggerRule_HistogramRule_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit BackgroundTracingMetadata_TriggerRule_HistogramRule_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit BackgroundTracingMetadata_TriggerRule_HistogramRule_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_histogram_name_hash() const { return at<1>().valid(); }
  uint64_t histogram_name_hash() const { return at<1>().as_uint64(); }
  bool has_histogram_min_trigger() const { return at<2>().valid(); }
  int64_t histogram_min_trigger() const { return at<2>().as_int64(); }
  bool has_histogram_max_trigger() const { return at<3>().valid(); }
  int64_t histogram_max_trigger() const { return at<3>().as_int64(); }
};

class BackgroundTracingMetadata_TriggerRule_HistogramRule : public ::protozero::Message {
 public:
  using Decoder = BackgroundTracingMetadata_TriggerRule_HistogramRule_Decoder;
  enum : int32_t {
    kHistogramNameHashFieldNumber = 1,
    kHistogramMinTriggerFieldNumber = 2,
    kHistogramMaxTriggerFieldNumber = 3,
  };
  static constexpr const char* GetName() { return ".perfetto.protos.BackgroundTracingMetadata.TriggerRule.HistogramRule"; }


  using FieldMetadata_HistogramNameHash =
    ::protozero::proto_utils::FieldMetadata<
      1,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kFixed64,
      uint64_t,
      BackgroundTracingMetadata_TriggerRule_HistogramRule>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.
  static constexpr FieldMetadata_HistogramNameHash kHistogramNameHash() { return {}; }
  void set_histogram_name_hash(uint64_t value) {
    static constexpr uint32_t field_id = FieldMetadata_HistogramNameHash::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kFixed64>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_HistogramMinTrigger =
    ::protozero::proto_utils::FieldMetadata<
      2,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kInt64,
      int64_t,
      BackgroundTracingMetadata_TriggerRule_HistogramRule>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.
  static constexpr FieldMetadata_HistogramMinTrigger kHistogramMinTrigger() { return {}; }
  void set_histogram_min_trigger(int64_t value) {
    static constexpr uint32_t field_id = FieldMetadata_HistogramMinTrigger::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kInt64>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_HistogramMaxTrigger =
    ::protozero::proto_utils::FieldMetadata<
      3,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kInt64,
      int64_t,
      BackgroundTracingMetadata_TriggerRule_HistogramRule>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.
  static constexpr FieldMetadata_HistogramMaxTrigger kHistogramMaxTrigger() { return {}; }
  void set_histogram_max_trigger(int64_t value) {
    static constexpr uint32_t field_id = FieldMetadata_HistogramMaxTrigger::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kInt64>
        ::Append(*this, field_id, value);
  }
};

class ChromeMetadataPacket_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/3, /*HAS_NONPACKED_REPEATED_FIELDS=*/false> {
 public:
  ChromeMetadataPacket_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit ChromeMetadataPacket_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit ChromeMetadataPacket_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_background_tracing_metadata() const { return at<1>().valid(); }
  ::protozero::ConstBytes background_tracing_metadata() const { return at<1>().as_bytes(); }
  bool has_chrome_version_code() const { return at<2>().valid(); }
  int32_t chrome_version_code() const { return at<2>().as_int32(); }
  bool has_enabled_categories() const { return at<3>().valid(); }
  ::protozero::ConstChars enabled_categories() const { return at<3>().as_string(); }
};

class ChromeMetadataPacket : public ::protozero::Message {
 public:
  using Decoder = ChromeMetadataPacket_Decoder;
  enum : int32_t {
    kBackgroundTracingMetadataFieldNumber = 1,
    kChromeVersionCodeFieldNumber = 2,
    kEnabledCategoriesFieldNumber = 3,
  };
  static constexpr const char* GetName() { return ".perfetto.protos.ChromeMetadataPacket"; }


  using FieldMetadata_BackgroundTracingMetadata =
    ::protozero::proto_utils::FieldMetadata<
      1,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kMessage,
      BackgroundTracingMetadata,
      ChromeMetadataPacket>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.
  static constexpr FieldMetadata_BackgroundTracingMetadata kBackgroundTracingMetadata() { return {}; }
  template <typename T = BackgroundTracingMetadata> T* set_background_tracing_metadata() {
    return BeginNestedMessage<T>(1);
  }


  using FieldMetadata_ChromeVersionCode =
    ::protozero::proto_utils::FieldMetadata<
      2,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kInt32,
      int32_t,
      ChromeMetadataPacket>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.
  static constexpr FieldMetadata_ChromeVersionCode kChromeVersionCode() { return {}; }
  void set_chrome_version_code(int32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_ChromeVersionCode::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kInt32>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_EnabledCategories =
    ::protozero::proto_utils::FieldMetadata<
      3,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kString,
      std::string,
      ChromeMetadataPacket>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.
  static constexpr FieldMetadata_EnabledCategories kEnabledCategories() { return {}; }
  void set_enabled_categories(const char* data, size_t size) {
    AppendBytes(FieldMetadata_EnabledCategories::kFieldId, data, size);
  }
  void set_enabled_categories(::protozero::ConstChars chars) {
    AppendBytes(FieldMetadata_EnabledCategories::kFieldId, chars.data, chars.size);
  }
  void set_enabled_categories(std::string value) {
    static constexpr uint32_t field_id = FieldMetadata_EnabledCategories::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kString>
        ::Append(*this, field_id, value);
  }
};

} // Namespace.
} // Namespace.
} // Namespace.
#endif  // Include guard.