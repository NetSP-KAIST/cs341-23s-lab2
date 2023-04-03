// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protos/perfetto/common/observable_events.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2fcommon_2fobservable_5fevents_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2fcommon_2fobservable_5fevents_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3020000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3020003 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/message_lite.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_util.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_protos_2fperfetto_2fcommon_2fobservable_5fevents_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_protos_2fperfetto_2fcommon_2fobservable_5fevents_2eproto {
  static const uint32_t offsets[];
};
namespace perfetto {
namespace protos {
class ObservableEvents;
struct ObservableEventsDefaultTypeInternal;
extern ObservableEventsDefaultTypeInternal _ObservableEvents_default_instance_;
class ObservableEvents_DataSourceInstanceStateChange;
struct ObservableEvents_DataSourceInstanceStateChangeDefaultTypeInternal;
extern ObservableEvents_DataSourceInstanceStateChangeDefaultTypeInternal _ObservableEvents_DataSourceInstanceStateChange_default_instance_;
}  // namespace protos
}  // namespace perfetto
PROTOBUF_NAMESPACE_OPEN
template<> ::perfetto::protos::ObservableEvents* Arena::CreateMaybeMessage<::perfetto::protos::ObservableEvents>(Arena*);
template<> ::perfetto::protos::ObservableEvents_DataSourceInstanceStateChange* Arena::CreateMaybeMessage<::perfetto::protos::ObservableEvents_DataSourceInstanceStateChange>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace perfetto {
namespace protos {

enum ObservableEvents_Type : int {
  ObservableEvents_Type_TYPE_UNSPECIFIED = 0,
  ObservableEvents_Type_TYPE_DATA_SOURCES_INSTANCES = 1,
  ObservableEvents_Type_TYPE_ALL_DATA_SOURCES_STARTED = 2
};
bool ObservableEvents_Type_IsValid(int value);
constexpr ObservableEvents_Type ObservableEvents_Type_Type_MIN = ObservableEvents_Type_TYPE_UNSPECIFIED;
constexpr ObservableEvents_Type ObservableEvents_Type_Type_MAX = ObservableEvents_Type_TYPE_ALL_DATA_SOURCES_STARTED;
constexpr int ObservableEvents_Type_Type_ARRAYSIZE = ObservableEvents_Type_Type_MAX + 1;

const std::string& ObservableEvents_Type_Name(ObservableEvents_Type value);
template<typename T>
inline const std::string& ObservableEvents_Type_Name(T enum_t_value) {
  static_assert(::std::is_same<T, ObservableEvents_Type>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function ObservableEvents_Type_Name.");
  return ObservableEvents_Type_Name(static_cast<ObservableEvents_Type>(enum_t_value));
}
bool ObservableEvents_Type_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, ObservableEvents_Type* value);
enum ObservableEvents_DataSourceInstanceState : int {
  ObservableEvents_DataSourceInstanceState_DATA_SOURCE_INSTANCE_STATE_STOPPED = 1,
  ObservableEvents_DataSourceInstanceState_DATA_SOURCE_INSTANCE_STATE_STARTED = 2
};
bool ObservableEvents_DataSourceInstanceState_IsValid(int value);
constexpr ObservableEvents_DataSourceInstanceState ObservableEvents_DataSourceInstanceState_DataSourceInstanceState_MIN = ObservableEvents_DataSourceInstanceState_DATA_SOURCE_INSTANCE_STATE_STOPPED;
constexpr ObservableEvents_DataSourceInstanceState ObservableEvents_DataSourceInstanceState_DataSourceInstanceState_MAX = ObservableEvents_DataSourceInstanceState_DATA_SOURCE_INSTANCE_STATE_STARTED;
constexpr int ObservableEvents_DataSourceInstanceState_DataSourceInstanceState_ARRAYSIZE = ObservableEvents_DataSourceInstanceState_DataSourceInstanceState_MAX + 1;

const std::string& ObservableEvents_DataSourceInstanceState_Name(ObservableEvents_DataSourceInstanceState value);
template<typename T>
inline const std::string& ObservableEvents_DataSourceInstanceState_Name(T enum_t_value) {
  static_assert(::std::is_same<T, ObservableEvents_DataSourceInstanceState>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function ObservableEvents_DataSourceInstanceState_Name.");
  return ObservableEvents_DataSourceInstanceState_Name(static_cast<ObservableEvents_DataSourceInstanceState>(enum_t_value));
}
bool ObservableEvents_DataSourceInstanceState_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, ObservableEvents_DataSourceInstanceState* value);
// ===================================================================

class ObservableEvents_DataSourceInstanceStateChange final :
    public ::PROTOBUF_NAMESPACE_ID::MessageLite /* @@protoc_insertion_point(class_definition:perfetto.protos.ObservableEvents.DataSourceInstanceStateChange) */ {
 public:
  inline ObservableEvents_DataSourceInstanceStateChange() : ObservableEvents_DataSourceInstanceStateChange(nullptr) {}
  ~ObservableEvents_DataSourceInstanceStateChange() override;
  explicit PROTOBUF_CONSTEXPR ObservableEvents_DataSourceInstanceStateChange(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  ObservableEvents_DataSourceInstanceStateChange(const ObservableEvents_DataSourceInstanceStateChange& from);
  ObservableEvents_DataSourceInstanceStateChange(ObservableEvents_DataSourceInstanceStateChange&& from) noexcept
    : ObservableEvents_DataSourceInstanceStateChange() {
    *this = ::std::move(from);
  }

  inline ObservableEvents_DataSourceInstanceStateChange& operator=(const ObservableEvents_DataSourceInstanceStateChange& from) {
    CopyFrom(from);
    return *this;
  }
  inline ObservableEvents_DataSourceInstanceStateChange& operator=(ObservableEvents_DataSourceInstanceStateChange&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const std::string& unknown_fields() const {
    return _internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString);
  }
  inline std::string* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<std::string>();
  }

  static const ObservableEvents_DataSourceInstanceStateChange& default_instance() {
    return *internal_default_instance();
  }
  static inline const ObservableEvents_DataSourceInstanceStateChange* internal_default_instance() {
    return reinterpret_cast<const ObservableEvents_DataSourceInstanceStateChange*>(
               &_ObservableEvents_DataSourceInstanceStateChange_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(ObservableEvents_DataSourceInstanceStateChange& a, ObservableEvents_DataSourceInstanceStateChange& b) {
    a.Swap(&b);
  }
  PROTOBUF_NOINLINE void Swap(ObservableEvents_DataSourceInstanceStateChange* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(ObservableEvents_DataSourceInstanceStateChange* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  ObservableEvents_DataSourceInstanceStateChange* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<ObservableEvents_DataSourceInstanceStateChange>(arena);
  }
  void CheckTypeAndMergeFrom(const ::PROTOBUF_NAMESPACE_ID::MessageLite& from)  final;
  void CopyFrom(const ObservableEvents_DataSourceInstanceStateChange& from);
  void MergeFrom(const ObservableEvents_DataSourceInstanceStateChange& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(ObservableEvents_DataSourceInstanceStateChange* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "perfetto.protos.ObservableEvents.DataSourceInstanceStateChange";
  }
  protected:
  explicit ObservableEvents_DataSourceInstanceStateChange(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  std::string GetTypeName() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kProducerNameFieldNumber = 1,
    kDataSourceNameFieldNumber = 2,
    kStateFieldNumber = 3,
  };
  // optional string producer_name = 1;
  bool has_producer_name() const;
  private:
  bool _internal_has_producer_name() const;
  public:
  void clear_producer_name();
  const std::string& producer_name() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_producer_name(ArgT0&& arg0, ArgT... args);
  std::string* mutable_producer_name();
  PROTOBUF_NODISCARD std::string* release_producer_name();
  void set_allocated_producer_name(std::string* producer_name);
  private:
  const std::string& _internal_producer_name() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_producer_name(const std::string& value);
  std::string* _internal_mutable_producer_name();
  public:

  // optional string data_source_name = 2;
  bool has_data_source_name() const;
  private:
  bool _internal_has_data_source_name() const;
  public:
  void clear_data_source_name();
  const std::string& data_source_name() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_data_source_name(ArgT0&& arg0, ArgT... args);
  std::string* mutable_data_source_name();
  PROTOBUF_NODISCARD std::string* release_data_source_name();
  void set_allocated_data_source_name(std::string* data_source_name);
  private:
  const std::string& _internal_data_source_name() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_data_source_name(const std::string& value);
  std::string* _internal_mutable_data_source_name();
  public:

  // optional .perfetto.protos.ObservableEvents.DataSourceInstanceState state = 3;
  bool has_state() const;
  private:
  bool _internal_has_state() const;
  public:
  void clear_state();
  ::perfetto::protos::ObservableEvents_DataSourceInstanceState state() const;
  void set_state(::perfetto::protos::ObservableEvents_DataSourceInstanceState value);
  private:
  ::perfetto::protos::ObservableEvents_DataSourceInstanceState _internal_state() const;
  void _internal_set_state(::perfetto::protos::ObservableEvents_DataSourceInstanceState value);
  public:

  // @@protoc_insertion_point(class_scope:perfetto.protos.ObservableEvents.DataSourceInstanceStateChange)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr producer_name_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr data_source_name_;
  int state_;
  friend struct ::TableStruct_protos_2fperfetto_2fcommon_2fobservable_5fevents_2eproto;
};
// -------------------------------------------------------------------

class ObservableEvents final :
    public ::PROTOBUF_NAMESPACE_ID::MessageLite /* @@protoc_insertion_point(class_definition:perfetto.protos.ObservableEvents) */ {
 public:
  inline ObservableEvents() : ObservableEvents(nullptr) {}
  ~ObservableEvents() override;
  explicit PROTOBUF_CONSTEXPR ObservableEvents(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  ObservableEvents(const ObservableEvents& from);
  ObservableEvents(ObservableEvents&& from) noexcept
    : ObservableEvents() {
    *this = ::std::move(from);
  }

  inline ObservableEvents& operator=(const ObservableEvents& from) {
    CopyFrom(from);
    return *this;
  }
  inline ObservableEvents& operator=(ObservableEvents&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const std::string& unknown_fields() const {
    return _internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString);
  }
  inline std::string* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<std::string>();
  }

  static const ObservableEvents& default_instance() {
    return *internal_default_instance();
  }
  static inline const ObservableEvents* internal_default_instance() {
    return reinterpret_cast<const ObservableEvents*>(
               &_ObservableEvents_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(ObservableEvents& a, ObservableEvents& b) {
    a.Swap(&b);
  }
  PROTOBUF_NOINLINE void Swap(ObservableEvents* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(ObservableEvents* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  ObservableEvents* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<ObservableEvents>(arena);
  }
  void CheckTypeAndMergeFrom(const ::PROTOBUF_NAMESPACE_ID::MessageLite& from)  final;
  void CopyFrom(const ObservableEvents& from);
  void MergeFrom(const ObservableEvents& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(ObservableEvents* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "perfetto.protos.ObservableEvents";
  }
  protected:
  explicit ObservableEvents(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  std::string GetTypeName() const final;

  // nested types ----------------------------------------------------

  typedef ObservableEvents_DataSourceInstanceStateChange DataSourceInstanceStateChange;

  typedef ObservableEvents_Type Type;
  static constexpr Type TYPE_UNSPECIFIED =
    ObservableEvents_Type_TYPE_UNSPECIFIED;
  static constexpr Type TYPE_DATA_SOURCES_INSTANCES =
    ObservableEvents_Type_TYPE_DATA_SOURCES_INSTANCES;
  static constexpr Type TYPE_ALL_DATA_SOURCES_STARTED =
    ObservableEvents_Type_TYPE_ALL_DATA_SOURCES_STARTED;
  static inline bool Type_IsValid(int value) {
    return ObservableEvents_Type_IsValid(value);
  }
  static constexpr Type Type_MIN =
    ObservableEvents_Type_Type_MIN;
  static constexpr Type Type_MAX =
    ObservableEvents_Type_Type_MAX;
  static constexpr int Type_ARRAYSIZE =
    ObservableEvents_Type_Type_ARRAYSIZE;
  template<typename T>
  static inline const std::string& Type_Name(T enum_t_value) {
    static_assert(::std::is_same<T, Type>::value ||
      ::std::is_integral<T>::value,
      "Incorrect type passed to function Type_Name.");
    return ObservableEvents_Type_Name(enum_t_value);
  }
  static inline bool Type_Parse(::PROTOBUF_NAMESPACE_ID::ConstStringParam name,
      Type* value) {
    return ObservableEvents_Type_Parse(name, value);
  }

  typedef ObservableEvents_DataSourceInstanceState DataSourceInstanceState;
  static constexpr DataSourceInstanceState DATA_SOURCE_INSTANCE_STATE_STOPPED =
    ObservableEvents_DataSourceInstanceState_DATA_SOURCE_INSTANCE_STATE_STOPPED;
  static constexpr DataSourceInstanceState DATA_SOURCE_INSTANCE_STATE_STARTED =
    ObservableEvents_DataSourceInstanceState_DATA_SOURCE_INSTANCE_STATE_STARTED;
  static inline bool DataSourceInstanceState_IsValid(int value) {
    return ObservableEvents_DataSourceInstanceState_IsValid(value);
  }
  static constexpr DataSourceInstanceState DataSourceInstanceState_MIN =
    ObservableEvents_DataSourceInstanceState_DataSourceInstanceState_MIN;
  static constexpr DataSourceInstanceState DataSourceInstanceState_MAX =
    ObservableEvents_DataSourceInstanceState_DataSourceInstanceState_MAX;
  static constexpr int DataSourceInstanceState_ARRAYSIZE =
    ObservableEvents_DataSourceInstanceState_DataSourceInstanceState_ARRAYSIZE;
  template<typename T>
  static inline const std::string& DataSourceInstanceState_Name(T enum_t_value) {
    static_assert(::std::is_same<T, DataSourceInstanceState>::value ||
      ::std::is_integral<T>::value,
      "Incorrect type passed to function DataSourceInstanceState_Name.");
    return ObservableEvents_DataSourceInstanceState_Name(enum_t_value);
  }
  static inline bool DataSourceInstanceState_Parse(::PROTOBUF_NAMESPACE_ID::ConstStringParam name,
      DataSourceInstanceState* value) {
    return ObservableEvents_DataSourceInstanceState_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  enum : int {
    kInstanceStateChangesFieldNumber = 1,
    kAllDataSourcesStartedFieldNumber = 2,
  };
  // repeated .perfetto.protos.ObservableEvents.DataSourceInstanceStateChange instance_state_changes = 1;
  int instance_state_changes_size() const;
  private:
  int _internal_instance_state_changes_size() const;
  public:
  void clear_instance_state_changes();
  ::perfetto::protos::ObservableEvents_DataSourceInstanceStateChange* mutable_instance_state_changes(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::perfetto::protos::ObservableEvents_DataSourceInstanceStateChange >*
      mutable_instance_state_changes();
  private:
  const ::perfetto::protos::ObservableEvents_DataSourceInstanceStateChange& _internal_instance_state_changes(int index) const;
  ::perfetto::protos::ObservableEvents_DataSourceInstanceStateChange* _internal_add_instance_state_changes();
  public:
  const ::perfetto::protos::ObservableEvents_DataSourceInstanceStateChange& instance_state_changes(int index) const;
  ::perfetto::protos::ObservableEvents_DataSourceInstanceStateChange* add_instance_state_changes();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::perfetto::protos::ObservableEvents_DataSourceInstanceStateChange >&
      instance_state_changes() const;

  // optional bool all_data_sources_started = 2;
  bool has_all_data_sources_started() const;
  private:
  bool _internal_has_all_data_sources_started() const;
  public:
  void clear_all_data_sources_started();
  bool all_data_sources_started() const;
  void set_all_data_sources_started(bool value);
  private:
  bool _internal_all_data_sources_started() const;
  void _internal_set_all_data_sources_started(bool value);
  public:

  // @@protoc_insertion_point(class_scope:perfetto.protos.ObservableEvents)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::perfetto::protos::ObservableEvents_DataSourceInstanceStateChange > instance_state_changes_;
  bool all_data_sources_started_;
  friend struct ::TableStruct_protos_2fperfetto_2fcommon_2fobservable_5fevents_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ObservableEvents_DataSourceInstanceStateChange

// optional string producer_name = 1;
inline bool ObservableEvents_DataSourceInstanceStateChange::_internal_has_producer_name() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool ObservableEvents_DataSourceInstanceStateChange::has_producer_name() const {
  return _internal_has_producer_name();
}
inline void ObservableEvents_DataSourceInstanceStateChange::clear_producer_name() {
  producer_name_.ClearToEmpty();
  _has_bits_[0] &= ~0x00000001u;
}
inline const std::string& ObservableEvents_DataSourceInstanceStateChange::producer_name() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.ObservableEvents.DataSourceInstanceStateChange.producer_name)
  return _internal_producer_name();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void ObservableEvents_DataSourceInstanceStateChange::set_producer_name(ArgT0&& arg0, ArgT... args) {
 _has_bits_[0] |= 0x00000001u;
 producer_name_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:perfetto.protos.ObservableEvents.DataSourceInstanceStateChange.producer_name)
}
inline std::string* ObservableEvents_DataSourceInstanceStateChange::mutable_producer_name() {
  std::string* _s = _internal_mutable_producer_name();
  // @@protoc_insertion_point(field_mutable:perfetto.protos.ObservableEvents.DataSourceInstanceStateChange.producer_name)
  return _s;
}
inline const std::string& ObservableEvents_DataSourceInstanceStateChange::_internal_producer_name() const {
  return producer_name_.Get();
}
inline void ObservableEvents_DataSourceInstanceStateChange::_internal_set_producer_name(const std::string& value) {
  _has_bits_[0] |= 0x00000001u;
  producer_name_.Set(value, GetArenaForAllocation());
}
inline std::string* ObservableEvents_DataSourceInstanceStateChange::_internal_mutable_producer_name() {
  _has_bits_[0] |= 0x00000001u;
  return producer_name_.Mutable(GetArenaForAllocation());
}
inline std::string* ObservableEvents_DataSourceInstanceStateChange::release_producer_name() {
  // @@protoc_insertion_point(field_release:perfetto.protos.ObservableEvents.DataSourceInstanceStateChange.producer_name)
  if (!_internal_has_producer_name()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000001u;
  auto* p = producer_name_.Release();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (producer_name_.IsDefault()) {
    producer_name_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  return p;
}
inline void ObservableEvents_DataSourceInstanceStateChange::set_allocated_producer_name(std::string* producer_name) {
  if (producer_name != nullptr) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  producer_name_.SetAllocated(producer_name, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (producer_name_.IsDefault()) {
    producer_name_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:perfetto.protos.ObservableEvents.DataSourceInstanceStateChange.producer_name)
}

// optional string data_source_name = 2;
inline bool ObservableEvents_DataSourceInstanceStateChange::_internal_has_data_source_name() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool ObservableEvents_DataSourceInstanceStateChange::has_data_source_name() const {
  return _internal_has_data_source_name();
}
inline void ObservableEvents_DataSourceInstanceStateChange::clear_data_source_name() {
  data_source_name_.ClearToEmpty();
  _has_bits_[0] &= ~0x00000002u;
}
inline const std::string& ObservableEvents_DataSourceInstanceStateChange::data_source_name() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.ObservableEvents.DataSourceInstanceStateChange.data_source_name)
  return _internal_data_source_name();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void ObservableEvents_DataSourceInstanceStateChange::set_data_source_name(ArgT0&& arg0, ArgT... args) {
 _has_bits_[0] |= 0x00000002u;
 data_source_name_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:perfetto.protos.ObservableEvents.DataSourceInstanceStateChange.data_source_name)
}
inline std::string* ObservableEvents_DataSourceInstanceStateChange::mutable_data_source_name() {
  std::string* _s = _internal_mutable_data_source_name();
  // @@protoc_insertion_point(field_mutable:perfetto.protos.ObservableEvents.DataSourceInstanceStateChange.data_source_name)
  return _s;
}
inline const std::string& ObservableEvents_DataSourceInstanceStateChange::_internal_data_source_name() const {
  return data_source_name_.Get();
}
inline void ObservableEvents_DataSourceInstanceStateChange::_internal_set_data_source_name(const std::string& value) {
  _has_bits_[0] |= 0x00000002u;
  data_source_name_.Set(value, GetArenaForAllocation());
}
inline std::string* ObservableEvents_DataSourceInstanceStateChange::_internal_mutable_data_source_name() {
  _has_bits_[0] |= 0x00000002u;
  return data_source_name_.Mutable(GetArenaForAllocation());
}
inline std::string* ObservableEvents_DataSourceInstanceStateChange::release_data_source_name() {
  // @@protoc_insertion_point(field_release:perfetto.protos.ObservableEvents.DataSourceInstanceStateChange.data_source_name)
  if (!_internal_has_data_source_name()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000002u;
  auto* p = data_source_name_.Release();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (data_source_name_.IsDefault()) {
    data_source_name_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  return p;
}
inline void ObservableEvents_DataSourceInstanceStateChange::set_allocated_data_source_name(std::string* data_source_name) {
  if (data_source_name != nullptr) {
    _has_bits_[0] |= 0x00000002u;
  } else {
    _has_bits_[0] &= ~0x00000002u;
  }
  data_source_name_.SetAllocated(data_source_name, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (data_source_name_.IsDefault()) {
    data_source_name_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:perfetto.protos.ObservableEvents.DataSourceInstanceStateChange.data_source_name)
}

// optional .perfetto.protos.ObservableEvents.DataSourceInstanceState state = 3;
inline bool ObservableEvents_DataSourceInstanceStateChange::_internal_has_state() const {
  bool value = (_has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline bool ObservableEvents_DataSourceInstanceStateChange::has_state() const {
  return _internal_has_state();
}
inline void ObservableEvents_DataSourceInstanceStateChange::clear_state() {
  state_ = 1;
  _has_bits_[0] &= ~0x00000004u;
}
inline ::perfetto::protos::ObservableEvents_DataSourceInstanceState ObservableEvents_DataSourceInstanceStateChange::_internal_state() const {
  return static_cast< ::perfetto::protos::ObservableEvents_DataSourceInstanceState >(state_);
}
inline ::perfetto::protos::ObservableEvents_DataSourceInstanceState ObservableEvents_DataSourceInstanceStateChange::state() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.ObservableEvents.DataSourceInstanceStateChange.state)
  return _internal_state();
}
inline void ObservableEvents_DataSourceInstanceStateChange::_internal_set_state(::perfetto::protos::ObservableEvents_DataSourceInstanceState value) {
  assert(::perfetto::protos::ObservableEvents_DataSourceInstanceState_IsValid(value));
  _has_bits_[0] |= 0x00000004u;
  state_ = value;
}
inline void ObservableEvents_DataSourceInstanceStateChange::set_state(::perfetto::protos::ObservableEvents_DataSourceInstanceState value) {
  _internal_set_state(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.ObservableEvents.DataSourceInstanceStateChange.state)
}

// -------------------------------------------------------------------

// ObservableEvents

// repeated .perfetto.protos.ObservableEvents.DataSourceInstanceStateChange instance_state_changes = 1;
inline int ObservableEvents::_internal_instance_state_changes_size() const {
  return instance_state_changes_.size();
}
inline int ObservableEvents::instance_state_changes_size() const {
  return _internal_instance_state_changes_size();
}
inline void ObservableEvents::clear_instance_state_changes() {
  instance_state_changes_.Clear();
}
inline ::perfetto::protos::ObservableEvents_DataSourceInstanceStateChange* ObservableEvents::mutable_instance_state_changes(int index) {
  // @@protoc_insertion_point(field_mutable:perfetto.protos.ObservableEvents.instance_state_changes)
  return instance_state_changes_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::perfetto::protos::ObservableEvents_DataSourceInstanceStateChange >*
ObservableEvents::mutable_instance_state_changes() {
  // @@protoc_insertion_point(field_mutable_list:perfetto.protos.ObservableEvents.instance_state_changes)
  return &instance_state_changes_;
}
inline const ::perfetto::protos::ObservableEvents_DataSourceInstanceStateChange& ObservableEvents::_internal_instance_state_changes(int index) const {
  return instance_state_changes_.Get(index);
}
inline const ::perfetto::protos::ObservableEvents_DataSourceInstanceStateChange& ObservableEvents::instance_state_changes(int index) const {
  // @@protoc_insertion_point(field_get:perfetto.protos.ObservableEvents.instance_state_changes)
  return _internal_instance_state_changes(index);
}
inline ::perfetto::protos::ObservableEvents_DataSourceInstanceStateChange* ObservableEvents::_internal_add_instance_state_changes() {
  return instance_state_changes_.Add();
}
inline ::perfetto::protos::ObservableEvents_DataSourceInstanceStateChange* ObservableEvents::add_instance_state_changes() {
  ::perfetto::protos::ObservableEvents_DataSourceInstanceStateChange* _add = _internal_add_instance_state_changes();
  // @@protoc_insertion_point(field_add:perfetto.protos.ObservableEvents.instance_state_changes)
  return _add;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::perfetto::protos::ObservableEvents_DataSourceInstanceStateChange >&
ObservableEvents::instance_state_changes() const {
  // @@protoc_insertion_point(field_list:perfetto.protos.ObservableEvents.instance_state_changes)
  return instance_state_changes_;
}

// optional bool all_data_sources_started = 2;
inline bool ObservableEvents::_internal_has_all_data_sources_started() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool ObservableEvents::has_all_data_sources_started() const {
  return _internal_has_all_data_sources_started();
}
inline void ObservableEvents::clear_all_data_sources_started() {
  all_data_sources_started_ = false;
  _has_bits_[0] &= ~0x00000001u;
}
inline bool ObservableEvents::_internal_all_data_sources_started() const {
  return all_data_sources_started_;
}
inline bool ObservableEvents::all_data_sources_started() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.ObservableEvents.all_data_sources_started)
  return _internal_all_data_sources_started();
}
inline void ObservableEvents::_internal_set_all_data_sources_started(bool value) {
  _has_bits_[0] |= 0x00000001u;
  all_data_sources_started_ = value;
}
inline void ObservableEvents::set_all_data_sources_started(bool value) {
  _internal_set_all_data_sources_started(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.ObservableEvents.all_data_sources_started)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace protos
}  // namespace perfetto

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::perfetto::protos::ObservableEvents_Type> : ::std::true_type {};
template <> struct is_proto_enum< ::perfetto::protos::ObservableEvents_DataSourceInstanceState> : ::std::true_type {};

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2fcommon_2fobservable_5fevents_2eproto
