/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Enum Utility Definitions                                                   *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

namespace mlir {
namespace gpu {
::llvm::StringRef stringifyBlocks(Blocks val) {
  switch (val) {
    case Blocks::DimX: return "x";
    case Blocks::DimY: return "y";
    case Blocks::DimZ: return "z";
  }
  return "";
}

::std::optional<Blocks> symbolizeBlocks(::llvm::StringRef str) {
  return ::llvm::StringSwitch<::std::optional<Blocks>>(str)
      .Case("x", Blocks::DimX)
      .Case("y", Blocks::DimY)
      .Case("z", Blocks::DimZ)
      .Default(::std::nullopt);
}
::std::optional<Blocks> symbolizeBlocks(uint64_t value) {
  switch (value) {
  case 0: return Blocks::DimX;
  case 1: return Blocks::DimY;
  case 2: return Blocks::DimZ;
  default: return ::std::nullopt;
  }
}

bool BlocksAttr::classof(::mlir::Attribute attr) {
  return (((attr.isa<::mlir::IntegerAttr>())) && ((attr.cast<::mlir::IntegerAttr>().getType().isSignlessInteger(64)))) && (((attr.cast<::mlir::IntegerAttr>().getInt() == 0)) || ((attr.cast<::mlir::IntegerAttr>().getInt() == 1)) || ((attr.cast<::mlir::IntegerAttr>().getInt() == 2)));
}
BlocksAttr BlocksAttr::get(::mlir::MLIRContext *context, Blocks val) {
  ::mlir::IntegerType intType = ::mlir::IntegerType::get(context, 64);
  ::mlir::IntegerAttr baseAttr = ::mlir::IntegerAttr::get(intType, static_cast<uint64_t>(val));
  return baseAttr.cast<BlocksAttr>();
}
Blocks BlocksAttr::getValue() const {
  return static_cast<Blocks>(::mlir::IntegerAttr::getInt());
}
} // namespace gpu
} // namespace mlir

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
::llvm::StringRef stringifyThreads(Threads val) {
  switch (val) {
    case Threads::DimX: return "x";
    case Threads::DimY: return "y";
    case Threads::DimZ: return "z";
  }
  return "";
}

::std::optional<Threads> symbolizeThreads(::llvm::StringRef str) {
  return ::llvm::StringSwitch<::std::optional<Threads>>(str)
      .Case("x", Threads::DimX)
      .Case("y", Threads::DimY)
      .Case("z", Threads::DimZ)
      .Default(::std::nullopt);
}
::std::optional<Threads> symbolizeThreads(uint64_t value) {
  switch (value) {
  case 0: return Threads::DimX;
  case 1: return Threads::DimY;
  case 2: return Threads::DimZ;
  default: return ::std::nullopt;
  }
}

bool ThreadsAttr::classof(::mlir::Attribute attr) {
  return (((attr.isa<::mlir::IntegerAttr>())) && ((attr.cast<::mlir::IntegerAttr>().getType().isSignlessInteger(64)))) && (((attr.cast<::mlir::IntegerAttr>().getInt() == 0)) || ((attr.cast<::mlir::IntegerAttr>().getInt() == 1)) || ((attr.cast<::mlir::IntegerAttr>().getInt() == 2)));
}
ThreadsAttr ThreadsAttr::get(::mlir::MLIRContext *context, Threads val) {
  ::mlir::IntegerType intType = ::mlir::IntegerType::get(context, 64);
  ::mlir::IntegerAttr baseAttr = ::mlir::IntegerAttr::get(intType, static_cast<uint64_t>(val));
  return baseAttr.cast<ThreadsAttr>();
}
Threads ThreadsAttr::getValue() const {
  return static_cast<Threads>(::mlir::IntegerAttr::getInt());
}
} // namespace gpu
} // namespace mlir

