// DO NOT EDIT. Autogenerated by Perfetto cppgen_plugin
#ifndef PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_SYSTEM_INFO_CPU_INFO_PROTO_CPP_H_
#define PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_SYSTEM_INFO_CPU_INFO_PROTO_CPP_H_

#include <stdint.h>
#include <bitset>
#include <vector>
#include <string>
#include <type_traits>

#include "perfetto/protozero/cpp_message_obj.h"
#include "perfetto/protozero/copyable_ptr.h"
#include "perfetto/base/export.h"

namespace perfetto {
namespace protos {
namespace gen {
class CpuInfo;
class CpuInfo_Cpu;
}  // namespace perfetto
}  // namespace protos
}  // namespace gen

namespace protozero {
class Message;
}  // namespace protozero

namespace perfetto {
namespace protos {
namespace gen {

class PERFETTO_EXPORT_COMPONENT CpuInfo : public ::protozero::CppMessageObj {
 public:
  using Cpu = CpuInfo_Cpu;
  enum FieldNumbers {
    kCpusFieldNumber = 1,
  };

  CpuInfo();
  ~CpuInfo() override;
  CpuInfo(CpuInfo&&) noexcept;
  CpuInfo& operator=(CpuInfo&&);
  CpuInfo(const CpuInfo&);
  CpuInfo& operator=(const CpuInfo&);
  bool operator==(const CpuInfo&) const;
  bool operator!=(const CpuInfo& other) const { return !(*this == other); }

  bool ParseFromArray(const void*, size_t) override;
  std::string SerializeAsString() const override;
  std::vector<uint8_t> SerializeAsArray() const override;
  void Serialize(::protozero::Message*) const;

  const std::vector<CpuInfo_Cpu>& cpus() const { return cpus_; }
  std::vector<CpuInfo_Cpu>* mutable_cpus() { return &cpus_; }
  int cpus_size() const;
  void clear_cpus();
  CpuInfo_Cpu* add_cpus();

 private:
  std::vector<CpuInfo_Cpu> cpus_;

  // Allows to preserve unknown protobuf fields for compatibility
  // with future versions of .proto files.
  std::string unknown_fields_;

  std::bitset<2> _has_field_{};
};


class PERFETTO_EXPORT_COMPONENT CpuInfo_Cpu : public ::protozero::CppMessageObj {
 public:
  enum FieldNumbers {
    kProcessorFieldNumber = 1,
    kFrequenciesFieldNumber = 2,
  };

  CpuInfo_Cpu();
  ~CpuInfo_Cpu() override;
  CpuInfo_Cpu(CpuInfo_Cpu&&) noexcept;
  CpuInfo_Cpu& operator=(CpuInfo_Cpu&&);
  CpuInfo_Cpu(const CpuInfo_Cpu&);
  CpuInfo_Cpu& operator=(const CpuInfo_Cpu&);
  bool operator==(const CpuInfo_Cpu&) const;
  bool operator!=(const CpuInfo_Cpu& other) const { return !(*this == other); }

  bool ParseFromArray(const void*, size_t) override;
  std::string SerializeAsString() const override;
  std::vector<uint8_t> SerializeAsArray() const override;
  void Serialize(::protozero::Message*) const;

  bool has_processor() const { return _has_field_[1]; }
  const std::string& processor() const { return processor_; }
  void set_processor(const std::string& value) { processor_ = value; _has_field_.set(1); }

  const std::vector<uint32_t>& frequencies() const { return frequencies_; }
  std::vector<uint32_t>* mutable_frequencies() { return &frequencies_; }
  int frequencies_size() const { return static_cast<int>(frequencies_.size()); }
  void clear_frequencies() { frequencies_.clear(); }
  void add_frequencies(uint32_t value) { frequencies_.emplace_back(value); }
  uint32_t* add_frequencies() { frequencies_.emplace_back(); return &frequencies_.back(); }

 private:
  std::string processor_{};
  std::vector<uint32_t> frequencies_;

  // Allows to preserve unknown protobuf fields for compatibility
  // with future versions of .proto files.
  std::string unknown_fields_;

  std::bitset<3> _has_field_{};
};

}  // namespace perfetto
}  // namespace protos
}  // namespace gen

#endif  // PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_SYSTEM_INFO_CPU_INFO_PROTO_CPP_H_
