/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Enum Utility Definitions                                                   *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

namespace mlir {
namespace gpu {
::llvm::StringRef stringifyAddressSpace(AddressSpace val) {
  switch (val) {
    case AddressSpace::Global: return "global";
    case AddressSpace::Workgroup: return "workgroup";
    case AddressSpace::Private: return "private";
  }
  return "";
}

::std::optional<AddressSpace> symbolizeAddressSpace(::llvm::StringRef str) {
  return ::llvm::StringSwitch<::std::optional<AddressSpace>>(str)
      .Case("global", AddressSpace::Global)
      .Case("workgroup", AddressSpace::Workgroup)
      .Case("private", AddressSpace::Private)
      .Default(::std::nullopt);
}
::std::optional<AddressSpace> symbolizeAddressSpace(uint32_t value) {
  switch (value) {
  case 1: return AddressSpace::Global;
  case 2: return AddressSpace::Workgroup;
  case 3: return AddressSpace::Private;
  default: return ::std::nullopt;
  }
}

} // namespace gpu
} // namespace mlir

namespace mlir {
namespace gpu {
::llvm::StringRef stringifyProcessor(Processor val) {
  switch (val) {
    case Processor::BlockX: return "block_x";
    case Processor::BlockY: return "block_y";
    case Processor::BlockZ: return "block_z";
    case Processor::ThreadX: return "thread_x";
    case Processor::ThreadY: return "thread_y";
    case Processor::ThreadZ: return "thread_z";
    case Processor::Sequential: return "sequential";
  }
  return "";
}

::std::optional<Processor> symbolizeProcessor(::llvm::StringRef str) {
  return ::llvm::StringSwitch<::std::optional<Processor>>(str)
      .Case("block_x", Processor::BlockX)
      .Case("block_y", Processor::BlockY)
      .Case("block_z", Processor::BlockZ)
      .Case("thread_x", Processor::ThreadX)
      .Case("thread_y", Processor::ThreadY)
      .Case("thread_z", Processor::ThreadZ)
      .Case("sequential", Processor::Sequential)
      .Default(::std::nullopt);
}
::std::optional<Processor> symbolizeProcessor(uint64_t value) {
  switch (value) {
  case 0: return Processor::BlockX;
  case 1: return Processor::BlockY;
  case 2: return Processor::BlockZ;
  case 3: return Processor::ThreadX;
  case 4: return Processor::ThreadY;
  case 5: return Processor::ThreadZ;
  case 6: return Processor::Sequential;
  default: return ::std::nullopt;
  }
}

bool ProcessorAttr::classof(::mlir::Attribute attr) {
  return (((attr.isa<::mlir::IntegerAttr>())) && ((attr.cast<::mlir::IntegerAttr>().getType().isSignlessInteger(64)))) && (((attr.cast<::mlir::IntegerAttr>().getInt() == 0)) || ((attr.cast<::mlir::IntegerAttr>().getInt() == 1)) || ((attr.cast<::mlir::IntegerAttr>().getInt() == 2)) || ((attr.cast<::mlir::IntegerAttr>().getInt() == 3)) || ((attr.cast<::mlir::IntegerAttr>().getInt() == 4)) || ((attr.cast<::mlir::IntegerAttr>().getInt() == 5)) || ((attr.cast<::mlir::IntegerAttr>().getInt() == 6)));
}
ProcessorAttr ProcessorAttr::get(::mlir::MLIRContext *context, Processor val) {
  ::mlir::IntegerType intType = ::mlir::IntegerType::get(context, 64);
  ::mlir::IntegerAttr baseAttr = ::mlir::IntegerAttr::get(intType, static_cast<uint64_t>(val));
  return baseAttr.cast<ProcessorAttr>();
}
Processor ProcessorAttr::getValue() const {
  return static_cast<Processor>(::mlir::IntegerAttr::getInt());
}
} // namespace gpu
} // namespace mlir

