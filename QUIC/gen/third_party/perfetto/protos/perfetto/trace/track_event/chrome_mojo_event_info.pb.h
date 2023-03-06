// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protos/perfetto/trace/track_event/chrome_mojo_event_info.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5fmojo_5fevent_5finfo_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5fmojo_5fevent_5finfo_2eproto

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
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5fmojo_5fevent_5finfo_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5fmojo_5fevent_5finfo_2eproto {
  static const uint32_t offsets[];
};
namespace perfetto {
namespace protos {
class ChromeMojoEventInfo;
struct ChromeMojoEventInfoDefaultTypeInternal;
extern ChromeMojoEventInfoDefaultTypeInternal _ChromeMojoEventInfo_default_instance_;
}  // namespace protos
}  // namespace perfetto
PROTOBUF_NAMESPACE_OPEN
template<> ::perfetto::protos::ChromeMojoEventInfo* Arena::CreateMaybeMessage<::perfetto::protos::ChromeMojoEventInfo>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace perfetto {
namespace protos {

// ===================================================================

class ChromeMojoEventInfo final :
    public ::PROTOBUF_NAMESPACE_ID::MessageLite /* @@protoc_insertion_point(class_definition:perfetto.protos.ChromeMojoEventInfo) */ {
 public:
  inline ChromeMojoEventInfo() : ChromeMojoEventInfo(nullptr) {}
  ~ChromeMojoEventInfo() override;
  explicit PROTOBUF_CONSTEXPR ChromeMojoEventInfo(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  ChromeMojoEventInfo(const ChromeMojoEventInfo& from);
  ChromeMojoEventInfo(ChromeMojoEventInfo&& from) noexcept
    : ChromeMojoEventInfo() {
    *this = ::std::move(from);
  }

  inline ChromeMojoEventInfo& operator=(const ChromeMojoEventInfo& from) {
    CopyFrom(from);
    return *this;
  }
  inline ChromeMojoEventInfo& operator=(ChromeMojoEventInfo&& from) noexcept {
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

  static const ChromeMojoEventInfo& default_instance() {
    return *internal_default_instance();
  }
  static inline const ChromeMojoEventInfo* internal_default_instance() {
    return reinterpret_cast<const ChromeMojoEventInfo*>(
               &_ChromeMojoEventInfo_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(ChromeMojoEventInfo& a, ChromeMojoEventInfo& b) {
    a.Swap(&b);
  }
  PROTOBUF_NOINLINE void Swap(ChromeMojoEventInfo* other) {
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
  void UnsafeArenaSwap(ChromeMojoEventInfo* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  ChromeMojoEventInfo* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<ChromeMojoEventInfo>(arena);
  }
  void CheckTypeAndMergeFrom(const ::PROTOBUF_NAMESPACE_ID::MessageLite& from)  final;
  void CopyFrom(const ChromeMojoEventInfo& from);
  void MergeFrom(const ChromeMojoEventInfo& from);
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
  void InternalSwap(ChromeMojoEventInfo* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "perfetto.protos.ChromeMojoEventInfo";
  }
  protected:
  explicit ChromeMojoEventInfo(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  std::string GetTypeName() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kWatcherNotifyInterfaceTagFieldNumber = 1,
    kMojoInterfaceTagFieldNumber = 3,
    kIpcHashFieldNumber = 2,
    kIsReplyFieldNumber = 5,
    kMojoInterfaceMethodIidFieldNumber = 4,
    kPayloadSizeFieldNumber = 6,
    kDataNumBytesFieldNumber = 7,
  };
  // optional string watcher_notify_interface_tag = 1;
  bool has_watcher_notify_interface_tag() const;
  private:
  bool _internal_has_watcher_notify_interface_tag() const;
  public:
  void clear_watcher_notify_interface_tag();
  const std::string& watcher_notify_interface_tag() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_watcher_notify_interface_tag(ArgT0&& arg0, ArgT... args);
  std::string* mutable_watcher_notify_interface_tag();
  PROTOBUF_NODISCARD std::string* release_watcher_notify_interface_tag();
  void set_allocated_watcher_notify_interface_tag(std::string* watcher_notify_interface_tag);
  private:
  const std::string& _internal_watcher_notify_interface_tag() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_watcher_notify_interface_tag(const std::string& value);
  std::string* _internal_mutable_watcher_notify_interface_tag();
  public:

  // optional string mojo_interface_tag = 3;
  bool has_mojo_interface_tag() const;
  private:
  bool _internal_has_mojo_interface_tag() const;
  public:
  void clear_mojo_interface_tag();
  const std::string& mojo_interface_tag() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_mojo_interface_tag(ArgT0&& arg0, ArgT... args);
  std::string* mutable_mojo_interface_tag();
  PROTOBUF_NODISCARD std::string* release_mojo_interface_tag();
  void set_allocated_mojo_interface_tag(std::string* mojo_interface_tag);
  private:
  const std::string& _internal_mojo_interface_tag() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_mojo_interface_tag(const std::string& value);
  std::string* _internal_mutable_mojo_interface_tag();
  public:

  // optional uint32 ipc_hash = 2;
  bool has_ipc_hash() const;
  private:
  bool _internal_has_ipc_hash() const;
  public:
  void clear_ipc_hash();
  uint32_t ipc_hash() const;
  void set_ipc_hash(uint32_t value);
  private:
  uint32_t _internal_ipc_hash() const;
  void _internal_set_ipc_hash(uint32_t value);
  public:

  // optional bool is_reply = 5;
  bool has_is_reply() const;
  private:
  bool _internal_has_is_reply() const;
  public:
  void clear_is_reply();
  bool is_reply() const;
  void set_is_reply(bool value);
  private:
  bool _internal_is_reply() const;
  void _internal_set_is_reply(bool value);
  public:

  // optional uint64 mojo_interface_method_iid = 4;
  bool has_mojo_interface_method_iid() const;
  private:
  bool _internal_has_mojo_interface_method_iid() const;
  public:
  void clear_mojo_interface_method_iid();
  uint64_t mojo_interface_method_iid() const;
  void set_mojo_interface_method_iid(uint64_t value);
  private:
  uint64_t _internal_mojo_interface_method_iid() const;
  void _internal_set_mojo_interface_method_iid(uint64_t value);
  public:

  // optional uint64 payload_size = 6;
  bool has_payload_size() const;
  private:
  bool _internal_has_payload_size() const;
  public:
  void clear_payload_size();
  uint64_t payload_size() const;
  void set_payload_size(uint64_t value);
  private:
  uint64_t _internal_payload_size() const;
  void _internal_set_payload_size(uint64_t value);
  public:

  // optional uint64 data_num_bytes = 7;
  bool has_data_num_bytes() const;
  private:
  bool _internal_has_data_num_bytes() const;
  public:
  void clear_data_num_bytes();
  uint64_t data_num_bytes() const;
  void set_data_num_bytes(uint64_t value);
  private:
  uint64_t _internal_data_num_bytes() const;
  void _internal_set_data_num_bytes(uint64_t value);
  public:

  // @@protoc_insertion_point(class_scope:perfetto.protos.ChromeMojoEventInfo)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr watcher_notify_interface_tag_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr mojo_interface_tag_;
  uint32_t ipc_hash_;
  bool is_reply_;
  uint64_t mojo_interface_method_iid_;
  uint64_t payload_size_;
  uint64_t data_num_bytes_;
  friend struct ::TableStruct_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5fmojo_5fevent_5finfo_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ChromeMojoEventInfo

// optional string watcher_notify_interface_tag = 1;
inline bool ChromeMojoEventInfo::_internal_has_watcher_notify_interface_tag() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool ChromeMojoEventInfo::has_watcher_notify_interface_tag() const {
  return _internal_has_watcher_notify_interface_tag();
}
inline void ChromeMojoEventInfo::clear_watcher_notify_interface_tag() {
  watcher_notify_interface_tag_.ClearToEmpty();
  _has_bits_[0] &= ~0x00000001u;
}
inline const std::string& ChromeMojoEventInfo::watcher_notify_interface_tag() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.ChromeMojoEventInfo.watcher_notify_interface_tag)
  return _internal_watcher_notify_interface_tag();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void ChromeMojoEventInfo::set_watcher_notify_interface_tag(ArgT0&& arg0, ArgT... args) {
 _has_bits_[0] |= 0x00000001u;
 watcher_notify_interface_tag_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:perfetto.protos.ChromeMojoEventInfo.watcher_notify_interface_tag)
}
inline std::string* ChromeMojoEventInfo::mutable_watcher_notify_interface_tag() {
  std::string* _s = _internal_mutable_watcher_notify_interface_tag();
  // @@protoc_insertion_point(field_mutable:perfetto.protos.ChromeMojoEventInfo.watcher_notify_interface_tag)
  return _s;
}
inline const std::string& ChromeMojoEventInfo::_internal_watcher_notify_interface_tag() const {
  return watcher_notify_interface_tag_.Get();
}
inline void ChromeMojoEventInfo::_internal_set_watcher_notify_interface_tag(const std::string& value) {
  _has_bits_[0] |= 0x00000001u;
  watcher_notify_interface_tag_.Set(value, GetArenaForAllocation());
}
inline std::string* ChromeMojoEventInfo::_internal_mutable_watcher_notify_interface_tag() {
  _has_bits_[0] |= 0x00000001u;
  return watcher_notify_interface_tag_.Mutable(GetArenaForAllocation());
}
inline std::string* ChromeMojoEventInfo::release_watcher_notify_interface_tag() {
  // @@protoc_insertion_point(field_release:perfetto.protos.ChromeMojoEventInfo.watcher_notify_interface_tag)
  if (!_internal_has_watcher_notify_interface_tag()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000001u;
  auto* p = watcher_notify_interface_tag_.Release();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (watcher_notify_interface_tag_.IsDefault()) {
    watcher_notify_interface_tag_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  return p;
}
inline void ChromeMojoEventInfo::set_allocated_watcher_notify_interface_tag(std::string* watcher_notify_interface_tag) {
  if (watcher_notify_interface_tag != nullptr) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  watcher_notify_interface_tag_.SetAllocated(watcher_notify_interface_tag, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (watcher_notify_interface_tag_.IsDefault()) {
    watcher_notify_interface_tag_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:perfetto.protos.ChromeMojoEventInfo.watcher_notify_interface_tag)
}

// optional uint32 ipc_hash = 2;
inline bool ChromeMojoEventInfo::_internal_has_ipc_hash() const {
  bool value = (_has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline bool ChromeMojoEventInfo::has_ipc_hash() const {
  return _internal_has_ipc_hash();
}
inline void ChromeMojoEventInfo::clear_ipc_hash() {
  ipc_hash_ = 0u;
  _has_bits_[0] &= ~0x00000004u;
}
inline uint32_t ChromeMojoEventInfo::_internal_ipc_hash() const {
  return ipc_hash_;
}
inline uint32_t ChromeMojoEventInfo::ipc_hash() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.ChromeMojoEventInfo.ipc_hash)
  return _internal_ipc_hash();
}
inline void ChromeMojoEventInfo::_internal_set_ipc_hash(uint32_t value) {
  _has_bits_[0] |= 0x00000004u;
  ipc_hash_ = value;
}
inline void ChromeMojoEventInfo::set_ipc_hash(uint32_t value) {
  _internal_set_ipc_hash(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.ChromeMojoEventInfo.ipc_hash)
}

// optional string mojo_interface_tag = 3;
inline bool ChromeMojoEventInfo::_internal_has_mojo_interface_tag() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool ChromeMojoEventInfo::has_mojo_interface_tag() const {
  return _internal_has_mojo_interface_tag();
}
inline void ChromeMojoEventInfo::clear_mojo_interface_tag() {
  mojo_interface_tag_.ClearToEmpty();
  _has_bits_[0] &= ~0x00000002u;
}
inline const std::string& ChromeMojoEventInfo::mojo_interface_tag() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.ChromeMojoEventInfo.mojo_interface_tag)
  return _internal_mojo_interface_tag();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void ChromeMojoEventInfo::set_mojo_interface_tag(ArgT0&& arg0, ArgT... args) {
 _has_bits_[0] |= 0x00000002u;
 mojo_interface_tag_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:perfetto.protos.ChromeMojoEventInfo.mojo_interface_tag)
}
inline std::string* ChromeMojoEventInfo::mutable_mojo_interface_tag() {
  std::string* _s = _internal_mutable_mojo_interface_tag();
  // @@protoc_insertion_point(field_mutable:perfetto.protos.ChromeMojoEventInfo.mojo_interface_tag)
  return _s;
}
inline const std::string& ChromeMojoEventInfo::_internal_mojo_interface_tag() const {
  return mojo_interface_tag_.Get();
}
inline void ChromeMojoEventInfo::_internal_set_mojo_interface_tag(const std::string& value) {
  _has_bits_[0] |= 0x00000002u;
  mojo_interface_tag_.Set(value, GetArenaForAllocation());
}
inline std::string* ChromeMojoEventInfo::_internal_mutable_mojo_interface_tag() {
  _has_bits_[0] |= 0x00000002u;
  return mojo_interface_tag_.Mutable(GetArenaForAllocation());
}
inline std::string* ChromeMojoEventInfo::release_mojo_interface_tag() {
  // @@protoc_insertion_point(field_release:perfetto.protos.ChromeMojoEventInfo.mojo_interface_tag)
  if (!_internal_has_mojo_interface_tag()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000002u;
  auto* p = mojo_interface_tag_.Release();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (mojo_interface_tag_.IsDefault()) {
    mojo_interface_tag_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  return p;
}
inline void ChromeMojoEventInfo::set_allocated_mojo_interface_tag(std::string* mojo_interface_tag) {
  if (mojo_interface_tag != nullptr) {
    _has_bits_[0] |= 0x00000002u;
  } else {
    _has_bits_[0] &= ~0x00000002u;
  }
  mojo_interface_tag_.SetAllocated(mojo_interface_tag, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (mojo_interface_tag_.IsDefault()) {
    mojo_interface_tag_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:perfetto.protos.ChromeMojoEventInfo.mojo_interface_tag)
}

// optional uint64 mojo_interface_method_iid = 4;
inline bool ChromeMojoEventInfo::_internal_has_mojo_interface_method_iid() const {
  bool value = (_has_bits_[0] & 0x00000010u) != 0;
  return value;
}
inline bool ChromeMojoEventInfo::has_mojo_interface_method_iid() const {
  return _internal_has_mojo_interface_method_iid();
}
inline void ChromeMojoEventInfo::clear_mojo_interface_method_iid() {
  mojo_interface_method_iid_ = uint64_t{0u};
  _has_bits_[0] &= ~0x00000010u;
}
inline uint64_t ChromeMojoEventInfo::_internal_mojo_interface_method_iid() const {
  return mojo_interface_method_iid_;
}
inline uint64_t ChromeMojoEventInfo::mojo_interface_method_iid() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.ChromeMojoEventInfo.mojo_interface_method_iid)
  return _internal_mojo_interface_method_iid();
}
inline void ChromeMojoEventInfo::_internal_set_mojo_interface_method_iid(uint64_t value) {
  _has_bits_[0] |= 0x00000010u;
  mojo_interface_method_iid_ = value;
}
inline void ChromeMojoEventInfo::set_mojo_interface_method_iid(uint64_t value) {
  _internal_set_mojo_interface_method_iid(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.ChromeMojoEventInfo.mojo_interface_method_iid)
}

// optional bool is_reply = 5;
inline bool ChromeMojoEventInfo::_internal_has_is_reply() const {
  bool value = (_has_bits_[0] & 0x00000008u) != 0;
  return value;
}
inline bool ChromeMojoEventInfo::has_is_reply() const {
  return _internal_has_is_reply();
}
inline void ChromeMojoEventInfo::clear_is_reply() {
  is_reply_ = false;
  _has_bits_[0] &= ~0x00000008u;
}
inline bool ChromeMojoEventInfo::_internal_is_reply() const {
  return is_reply_;
}
inline bool ChromeMojoEventInfo::is_reply() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.ChromeMojoEventInfo.is_reply)
  return _internal_is_reply();
}
inline void ChromeMojoEventInfo::_internal_set_is_reply(bool value) {
  _has_bits_[0] |= 0x00000008u;
  is_reply_ = value;
}
inline void ChromeMojoEventInfo::set_is_reply(bool value) {
  _internal_set_is_reply(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.ChromeMojoEventInfo.is_reply)
}

// optional uint64 payload_size = 6;
inline bool ChromeMojoEventInfo::_internal_has_payload_size() const {
  bool value = (_has_bits_[0] & 0x00000020u) != 0;
  return value;
}
inline bool ChromeMojoEventInfo::has_payload_size() const {
  return _internal_has_payload_size();
}
inline void ChromeMojoEventInfo::clear_payload_size() {
  payload_size_ = uint64_t{0u};
  _has_bits_[0] &= ~0x00000020u;
}
inline uint64_t ChromeMojoEventInfo::_internal_payload_size() const {
  return payload_size_;
}
inline uint64_t ChromeMojoEventInfo::payload_size() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.ChromeMojoEventInfo.payload_size)
  return _internal_payload_size();
}
inline void ChromeMojoEventInfo::_internal_set_payload_size(uint64_t value) {
  _has_bits_[0] |= 0x00000020u;
  payload_size_ = value;
}
inline void ChromeMojoEventInfo::set_payload_size(uint64_t value) {
  _internal_set_payload_size(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.ChromeMojoEventInfo.payload_size)
}

// optional uint64 data_num_bytes = 7;
inline bool ChromeMojoEventInfo::_internal_has_data_num_bytes() const {
  bool value = (_has_bits_[0] & 0x00000040u) != 0;
  return value;
}
inline bool ChromeMojoEventInfo::has_data_num_bytes() const {
  return _internal_has_data_num_bytes();
}
inline void ChromeMojoEventInfo::clear_data_num_bytes() {
  data_num_bytes_ = uint64_t{0u};
  _has_bits_[0] &= ~0x00000040u;
}
inline uint64_t ChromeMojoEventInfo::_internal_data_num_bytes() const {
  return data_num_bytes_;
}
inline uint64_t ChromeMojoEventInfo::data_num_bytes() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.ChromeMojoEventInfo.data_num_bytes)
  return _internal_data_num_bytes();
}
inline void ChromeMojoEventInfo::_internal_set_data_num_bytes(uint64_t value) {
  _has_bits_[0] |= 0x00000040u;
  data_num_bytes_ = value;
}
inline void ChromeMojoEventInfo::set_data_num_bytes(uint64_t value) {
  _internal_set_data_num_bytes(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.ChromeMojoEventInfo.data_num_bytes)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace protos
}  // namespace perfetto

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5fmojo_5fevent_5finfo_2eproto