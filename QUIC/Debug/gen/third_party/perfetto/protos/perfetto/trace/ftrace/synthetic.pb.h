// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protos/perfetto/trace/ftrace/synthetic.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2fftrace_2fsynthetic_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2fftrace_2fsynthetic_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_protos_2fperfetto_2ftrace_2fftrace_2fsynthetic_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_protos_2fperfetto_2ftrace_2fftrace_2fsynthetic_2eproto {
  static const uint32_t offsets[];
};
namespace perfetto {
namespace protos {
class RssStatThrottledFtraceEvent;
struct RssStatThrottledFtraceEventDefaultTypeInternal;
extern RssStatThrottledFtraceEventDefaultTypeInternal _RssStatThrottledFtraceEvent_default_instance_;
}  // namespace protos
}  // namespace perfetto
PROTOBUF_NAMESPACE_OPEN
template<> ::perfetto::protos::RssStatThrottledFtraceEvent* Arena::CreateMaybeMessage<::perfetto::protos::RssStatThrottledFtraceEvent>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace perfetto {
namespace protos {

// ===================================================================

class RssStatThrottledFtraceEvent final :
    public ::PROTOBUF_NAMESPACE_ID::MessageLite /* @@protoc_insertion_point(class_definition:perfetto.protos.RssStatThrottledFtraceEvent) */ {
 public:
  inline RssStatThrottledFtraceEvent() : RssStatThrottledFtraceEvent(nullptr) {}
  ~RssStatThrottledFtraceEvent() override;
  explicit PROTOBUF_CONSTEXPR RssStatThrottledFtraceEvent(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  RssStatThrottledFtraceEvent(const RssStatThrottledFtraceEvent& from);
  RssStatThrottledFtraceEvent(RssStatThrottledFtraceEvent&& from) noexcept
    : RssStatThrottledFtraceEvent() {
    *this = ::std::move(from);
  }

  inline RssStatThrottledFtraceEvent& operator=(const RssStatThrottledFtraceEvent& from) {
    CopyFrom(from);
    return *this;
  }
  inline RssStatThrottledFtraceEvent& operator=(RssStatThrottledFtraceEvent&& from) noexcept {
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

  static const RssStatThrottledFtraceEvent& default_instance() {
    return *internal_default_instance();
  }
  static inline const RssStatThrottledFtraceEvent* internal_default_instance() {
    return reinterpret_cast<const RssStatThrottledFtraceEvent*>(
               &_RssStatThrottledFtraceEvent_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(RssStatThrottledFtraceEvent& a, RssStatThrottledFtraceEvent& b) {
    a.Swap(&b);
  }
  PROTOBUF_NOINLINE void Swap(RssStatThrottledFtraceEvent* other) {
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
  void UnsafeArenaSwap(RssStatThrottledFtraceEvent* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  RssStatThrottledFtraceEvent* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<RssStatThrottledFtraceEvent>(arena);
  }
  void CheckTypeAndMergeFrom(const ::PROTOBUF_NAMESPACE_ID::MessageLite& from)  final;
  void CopyFrom(const RssStatThrottledFtraceEvent& from);
  void MergeFrom(const RssStatThrottledFtraceEvent& from);
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
  void InternalSwap(RssStatThrottledFtraceEvent* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "perfetto.protos.RssStatThrottledFtraceEvent";
  }
  protected:
  explicit RssStatThrottledFtraceEvent(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  std::string GetTypeName() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kCurrFieldNumber = 1,
    kMemberFieldNumber = 2,
    kSizeFieldNumber = 4,
    kMmIdFieldNumber = 3,
  };
  // optional uint32 curr = 1;
  bool has_curr() const;
  private:
  bool _internal_has_curr() const;
  public:
  void clear_curr();
  uint32_t curr() const;
  void set_curr(uint32_t value);
  private:
  uint32_t _internal_curr() const;
  void _internal_set_curr(uint32_t value);
  public:

  // optional int32 member = 2;
  bool has_member() const;
  private:
  bool _internal_has_member() const;
  public:
  void clear_member();
  int32_t member() const;
  void set_member(int32_t value);
  private:
  int32_t _internal_member() const;
  void _internal_set_member(int32_t value);
  public:

  // optional int64 size = 4;
  bool has_size() const;
  private:
  bool _internal_has_size() const;
  public:
  void clear_size();
  int64_t size() const;
  void set_size(int64_t value);
  private:
  int64_t _internal_size() const;
  void _internal_set_size(int64_t value);
  public:

  // optional uint32 mm_id = 3;
  bool has_mm_id() const;
  private:
  bool _internal_has_mm_id() const;
  public:
  void clear_mm_id();
  uint32_t mm_id() const;
  void set_mm_id(uint32_t value);
  private:
  uint32_t _internal_mm_id() const;
  void _internal_set_mm_id(uint32_t value);
  public:

  // @@protoc_insertion_point(class_scope:perfetto.protos.RssStatThrottledFtraceEvent)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  uint32_t curr_;
  int32_t member_;
  int64_t size_;
  uint32_t mm_id_;
  friend struct ::TableStruct_protos_2fperfetto_2ftrace_2fftrace_2fsynthetic_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// RssStatThrottledFtraceEvent

// optional uint32 curr = 1;
inline bool RssStatThrottledFtraceEvent::_internal_has_curr() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool RssStatThrottledFtraceEvent::has_curr() const {
  return _internal_has_curr();
}
inline void RssStatThrottledFtraceEvent::clear_curr() {
  curr_ = 0u;
  _has_bits_[0] &= ~0x00000001u;
}
inline uint32_t RssStatThrottledFtraceEvent::_internal_curr() const {
  return curr_;
}
inline uint32_t RssStatThrottledFtraceEvent::curr() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.RssStatThrottledFtraceEvent.curr)
  return _internal_curr();
}
inline void RssStatThrottledFtraceEvent::_internal_set_curr(uint32_t value) {
  _has_bits_[0] |= 0x00000001u;
  curr_ = value;
}
inline void RssStatThrottledFtraceEvent::set_curr(uint32_t value) {
  _internal_set_curr(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.RssStatThrottledFtraceEvent.curr)
}

// optional int32 member = 2;
inline bool RssStatThrottledFtraceEvent::_internal_has_member() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool RssStatThrottledFtraceEvent::has_member() const {
  return _internal_has_member();
}
inline void RssStatThrottledFtraceEvent::clear_member() {
  member_ = 0;
  _has_bits_[0] &= ~0x00000002u;
}
inline int32_t RssStatThrottledFtraceEvent::_internal_member() const {
  return member_;
}
inline int32_t RssStatThrottledFtraceEvent::member() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.RssStatThrottledFtraceEvent.member)
  return _internal_member();
}
inline void RssStatThrottledFtraceEvent::_internal_set_member(int32_t value) {
  _has_bits_[0] |= 0x00000002u;
  member_ = value;
}
inline void RssStatThrottledFtraceEvent::set_member(int32_t value) {
  _internal_set_member(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.RssStatThrottledFtraceEvent.member)
}

// optional uint32 mm_id = 3;
inline bool RssStatThrottledFtraceEvent::_internal_has_mm_id() const {
  bool value = (_has_bits_[0] & 0x00000008u) != 0;
  return value;
}
inline bool RssStatThrottledFtraceEvent::has_mm_id() const {
  return _internal_has_mm_id();
}
inline void RssStatThrottledFtraceEvent::clear_mm_id() {
  mm_id_ = 0u;
  _has_bits_[0] &= ~0x00000008u;
}
inline uint32_t RssStatThrottledFtraceEvent::_internal_mm_id() const {
  return mm_id_;
}
inline uint32_t RssStatThrottledFtraceEvent::mm_id() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.RssStatThrottledFtraceEvent.mm_id)
  return _internal_mm_id();
}
inline void RssStatThrottledFtraceEvent::_internal_set_mm_id(uint32_t value) {
  _has_bits_[0] |= 0x00000008u;
  mm_id_ = value;
}
inline void RssStatThrottledFtraceEvent::set_mm_id(uint32_t value) {
  _internal_set_mm_id(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.RssStatThrottledFtraceEvent.mm_id)
}

// optional int64 size = 4;
inline bool RssStatThrottledFtraceEvent::_internal_has_size() const {
  bool value = (_has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline bool RssStatThrottledFtraceEvent::has_size() const {
  return _internal_has_size();
}
inline void RssStatThrottledFtraceEvent::clear_size() {
  size_ = int64_t{0};
  _has_bits_[0] &= ~0x00000004u;
}
inline int64_t RssStatThrottledFtraceEvent::_internal_size() const {
  return size_;
}
inline int64_t RssStatThrottledFtraceEvent::size() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.RssStatThrottledFtraceEvent.size)
  return _internal_size();
}
inline void RssStatThrottledFtraceEvent::_internal_set_size(int64_t value) {
  _has_bits_[0] |= 0x00000004u;
  size_ = value;
}
inline void RssStatThrottledFtraceEvent::set_size(int64_t value) {
  _internal_set_size(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.RssStatThrottledFtraceEvent.size)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace protos
}  // namespace perfetto

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2fftrace_2fsynthetic_2eproto
