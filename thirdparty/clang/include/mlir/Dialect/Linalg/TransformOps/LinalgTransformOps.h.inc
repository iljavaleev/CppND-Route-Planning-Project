/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Declarations                                                            *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#if defined(GET_OP_CLASSES) || defined(GET_OP_FWD_DEFINES)
#undef GET_OP_FWD_DEFINES
namespace mlir {
namespace transform {
class DecomposeOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class FuseIntoContainingOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class FuseOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class GeneralizeOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class InterchangeOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class MaskedVectorizeOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class MatchOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class MultiTileSizesOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class PackOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class PackTransposeOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class PadOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class PromoteOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class ReplaceOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class ScalarizeOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class SplitOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class SplitReductionOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class TileOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class TileReductionUsingForeachThreadOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class TileReductionUsingScfOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class TileToForeachThreadOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class TileToScfForOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class VectorizeOp;
} // namespace transform
} // namespace mlir
#endif

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES


//===----------------------------------------------------------------------===//
// Local Utility Method Definitions
//===----------------------------------------------------------------------===//

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::DecomposeOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class DecomposeOpGenericAdaptorBase {
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::mlir::RegionRange odsRegions;
  ::std::optional<::mlir::OperationName> odsOpName;
public:
  DecomposeOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class DecomposeOpGenericAdaptor : public detail::DecomposeOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::DecomposeOpGenericAdaptorBase;
public:
  DecomposeOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, ::mlir::RegionRange regions = {}) : Base(attrs, regions), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getTarget() {
    return *getODSOperands(0).begin();
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class DecomposeOpAdaptor : public DecomposeOpGenericAdaptor<::mlir::ValueRange> {
public:
  using DecomposeOpGenericAdaptor::DecomposeOpGenericAdaptor;
  DecomposeOpAdaptor(DecomposeOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class DecomposeOp : public ::mlir::Op<DecomposeOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::pdl::OperationType>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::transform::FunctionalStyleTransformOpTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::transform::TransformOpInterface::Trait, ::mlir::transform::TransformEachOpTrait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = DecomposeOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = DecomposeOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.structured.decompose");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::pdl::OperationType> getTarget();
  ::mlir::MutableOperandRange getTargetMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::pdl::OperationType> getTransformed();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type transformed, ::mlir::Value target);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
  ::mlir::DiagnosedSilenceableFailure applyToOne(
      ::mlir::linalg::LinalgOp target,
      ::mlir::transform::ApplyToEachResultList &results,
      ::mlir::transform::TransformState &state);
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::DecomposeOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::FuseIntoContainingOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class FuseIntoContainingOpGenericAdaptorBase {
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::mlir::RegionRange odsRegions;
  ::std::optional<::mlir::OperationName> odsOpName;
public:
  FuseIntoContainingOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class FuseIntoContainingOpGenericAdaptor : public detail::FuseIntoContainingOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::FuseIntoContainingOpGenericAdaptorBase;
public:
  FuseIntoContainingOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, ::mlir::RegionRange regions = {}) : Base(attrs, regions), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getProducerOp() {
    return *getODSOperands(0).begin();
  }

  ValueT getContainingOp() {
    return *getODSOperands(1).begin();
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class FuseIntoContainingOpAdaptor : public FuseIntoContainingOpGenericAdaptor<::mlir::ValueRange> {
public:
  using FuseIntoContainingOpGenericAdaptor::FuseIntoContainingOpGenericAdaptor;
  FuseIntoContainingOpAdaptor(FuseIntoContainingOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class FuseIntoContainingOp : public ::mlir::Op<FuseIntoContainingOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::pdl::OperationType>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::NOperands<2>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::transform::TransformOpInterface::Trait, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = FuseIntoContainingOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = FuseIntoContainingOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.structured.fuse_into_containing_op");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::pdl::OperationType> getProducerOp();
  ::mlir::TypedValue<::mlir::pdl::OperationType> getContainingOp();
  ::mlir::MutableOperandRange getProducerOpMutable();
  ::mlir::MutableOperandRange getContainingOpMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::pdl::OperationType> getFusedOp();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, Value producerOp, Value containingOp);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type fused_op, ::mlir::Value producer_op, ::mlir::Value containing_op);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value producer_op, ::mlir::Value containing_op);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::DiagnosedSilenceableFailure apply(::mlir::transform::TransformResults &transformResults, ::mlir::transform::TransformState &state);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
public:
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::FuseIntoContainingOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::FuseOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class FuseOpGenericAdaptorBase {
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::mlir::RegionRange odsRegions;
  ::std::optional<::mlir::OperationName> odsOpName;
public:
  FuseOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
  ::mlir::ArrayAttr getTileSizesAttr();
  ::mlir::ArrayAttr getTileSizes();
  ::mlir::ArrayAttr getTileInterchangeAttr();
  ::mlir::ArrayAttr getTileInterchange();
};
} // namespace detail
template <typename RangeT>
class FuseOpGenericAdaptor : public detail::FuseOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::FuseOpGenericAdaptorBase;
public:
  FuseOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, ::mlir::RegionRange regions = {}) : Base(attrs, regions), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getTarget() {
    return *getODSOperands(0).begin();
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class FuseOpAdaptor : public FuseOpGenericAdaptor<::mlir::ValueRange> {
public:
  using FuseOpGenericAdaptor::FuseOpGenericAdaptor;
  FuseOpAdaptor(FuseOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class FuseOp : public ::mlir::Op<FuseOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::AtLeastNResults<1>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::transform::FunctionalStyleTransformOpTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::transform::TransformOpInterface::Trait, ::mlir::OpAsmOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = FuseOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = FuseOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("tile_interchange"), ::llvm::StringRef("tile_sizes")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getTileInterchangeAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getTileInterchangeAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getTileSizesAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getTileSizesAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  void getAsmResultNames(::mlir::OpAsmSetValueNameFn setNameFn);
  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.structured.fuse");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::pdl::OperationType> getTarget();
  ::mlir::MutableOperandRange getTargetMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::pdl::OperationType> getTransformed();
  ::mlir::Operation::result_range getLoops();
  ::mlir::ArrayAttr getTileSizesAttr();
  ::mlir::ArrayAttr getTileSizes();
  ::mlir::ArrayAttr getTileInterchangeAttr();
  ::mlir::ArrayAttr getTileInterchange();
  void setTileSizesAttr(::mlir::ArrayAttr attr);
  void setTileInterchangeAttr(::mlir::ArrayAttr attr);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type transformed, ::mlir::TypeRange loops, ::mlir::Value target, ::mlir::ArrayAttr tile_sizes, ::mlir::ArrayAttr tile_interchange);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::ArrayAttr tile_sizes, ::mlir::ArrayAttr tile_interchange);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void populateDefaultAttrs(const ::mlir::OperationName &opName, ::mlir::NamedAttrList &attributes);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::LogicalResult verify();
  ::mlir::DiagnosedSilenceableFailure apply(::mlir::transform::TransformResults &transformResults, ::mlir::transform::TransformState &state);
private:
  ::mlir::StringAttr getAttributeNameForIndex(unsigned index) {
    return getAttributeNameForIndex((*this)->getName(), index);
  }

  static ::mlir::StringAttr getAttributeNameForIndex(::mlir::OperationName name, unsigned index) {
    assert(index < 2 && "invalid attribute index");
    assert(name.getStringRef() == getOperationName() && "invalid operation name");
    return name.getAttributeNames()[index];
  }

public:
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::FuseOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::GeneralizeOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class GeneralizeOpGenericAdaptorBase {
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::mlir::RegionRange odsRegions;
  ::std::optional<::mlir::OperationName> odsOpName;
public:
  GeneralizeOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class GeneralizeOpGenericAdaptor : public detail::GeneralizeOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::GeneralizeOpGenericAdaptorBase;
public:
  GeneralizeOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, ::mlir::RegionRange regions = {}) : Base(attrs, regions), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getTarget() {
    return *getODSOperands(0).begin();
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class GeneralizeOpAdaptor : public GeneralizeOpGenericAdaptor<::mlir::ValueRange> {
public:
  using GeneralizeOpGenericAdaptor::GeneralizeOpGenericAdaptor;
  GeneralizeOpAdaptor(GeneralizeOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class GeneralizeOp : public ::mlir::Op<GeneralizeOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::pdl::OperationType>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::transform::FunctionalStyleTransformOpTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::transform::TransformOpInterface::Trait, ::mlir::transform::TransformEachOpTrait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = GeneralizeOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = GeneralizeOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.structured.generalize");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::pdl::OperationType> getTarget();
  ::mlir::MutableOperandRange getTargetMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::pdl::OperationType> getTransformed();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type transformed, ::mlir::Value target);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
  ::mlir::DiagnosedSilenceableFailure applyToOne(
      ::mlir::linalg::LinalgOp target,
      ::mlir::transform::ApplyToEachResultList &results,
      ::mlir::transform::TransformState &state);
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::GeneralizeOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::InterchangeOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class InterchangeOpGenericAdaptorBase {
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::mlir::RegionRange odsRegions;
  ::std::optional<::mlir::OperationName> odsOpName;
public:
  InterchangeOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
  ::mlir::DenseI64ArrayAttr getIteratorInterchangeAttr();
  ::llvm::ArrayRef<int64_t> getIteratorInterchange();
};
} // namespace detail
template <typename RangeT>
class InterchangeOpGenericAdaptor : public detail::InterchangeOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::InterchangeOpGenericAdaptorBase;
public:
  InterchangeOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, ::mlir::RegionRange regions = {}) : Base(attrs, regions), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getTarget() {
    return *getODSOperands(0).begin();
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class InterchangeOpAdaptor : public InterchangeOpGenericAdaptor<::mlir::ValueRange> {
public:
  using InterchangeOpGenericAdaptor::InterchangeOpGenericAdaptor;
  InterchangeOpAdaptor(InterchangeOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class InterchangeOp : public ::mlir::Op<InterchangeOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::pdl::OperationType>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::transform::FunctionalStyleTransformOpTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::transform::TransformOpInterface::Trait, ::mlir::transform::TransformEachOpTrait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = InterchangeOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = InterchangeOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("iterator_interchange")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getIteratorInterchangeAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getIteratorInterchangeAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.structured.interchange");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::pdl::OperationType> getTarget();
  ::mlir::MutableOperandRange getTargetMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::pdl::OperationType> getTransformed();
  ::mlir::DenseI64ArrayAttr getIteratorInterchangeAttr();
  ::llvm::ArrayRef<int64_t> getIteratorInterchange();
  void setIteratorInterchangeAttr(::mlir::DenseI64ArrayAttr attr);
  void setIteratorInterchange(::std::optional<::llvm::ArrayRef<int64_t>> attrValue);
  ::mlir::Attribute removeIteratorInterchangeAttr();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type transformed, ::mlir::Value target, /*optional*/::mlir::DenseI64ArrayAttr iterator_interchange);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, /*optional*/::mlir::DenseI64ArrayAttr iterator_interchange);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type transformed, ::mlir::Value target, /*optional*/::llvm::ArrayRef<int64_t> iterator_interchange = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, /*optional*/::llvm::ArrayRef<int64_t> iterator_interchange = {});
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::LogicalResult verify();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
private:
  ::mlir::StringAttr getAttributeNameForIndex(unsigned index) {
    return getAttributeNameForIndex((*this)->getName(), index);
  }

  static ::mlir::StringAttr getAttributeNameForIndex(::mlir::OperationName name, unsigned index) {
    assert(index < 1 && "invalid attribute index");
    assert(name.getStringRef() == getOperationName() && "invalid operation name");
    return name.getAttributeNames()[index];
  }

public:
  ::mlir::DiagnosedSilenceableFailure applyToOne(
      ::mlir::linalg::GenericOp target,
      ::mlir::transform::ApplyToEachResultList &results,
      ::mlir::transform::TransformState &state);
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::InterchangeOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::MaskedVectorizeOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class MaskedVectorizeOpGenericAdaptorBase {
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::mlir::RegionRange odsRegions;
  ::std::optional<::mlir::OperationName> odsOpName;
public:
  MaskedVectorizeOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
  ::mlir::DenseI64ArrayAttr getStaticVectorSizesAttr();
  ::llvm::ArrayRef<int64_t> getStaticVectorSizes();
};
} // namespace detail
template <typename RangeT>
class MaskedVectorizeOpGenericAdaptor : public detail::MaskedVectorizeOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::MaskedVectorizeOpGenericAdaptorBase;
public:
  MaskedVectorizeOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, ::mlir::RegionRange regions = {}) : Base(attrs, regions), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getTarget() {
    return *getODSOperands(0).begin();
  }

  RangeT getVectorSizes() {
    return getODSOperands(1);
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class MaskedVectorizeOpAdaptor : public MaskedVectorizeOpGenericAdaptor<::mlir::ValueRange> {
public:
  using MaskedVectorizeOpGenericAdaptor::MaskedVectorizeOpGenericAdaptor;
  MaskedVectorizeOpAdaptor(MaskedVectorizeOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class MaskedVectorizeOp : public ::mlir::Op<MaskedVectorizeOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::AtLeastNOperands<1>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::transform::TransformOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = MaskedVectorizeOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = MaskedVectorizeOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("static_vector_sizes")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getStaticVectorSizesAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getStaticVectorSizesAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.structured.masked_vectorize");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::pdl::OperationType> getTarget();
  ::mlir::Operation::operand_range getVectorSizes();
  ::mlir::MutableOperandRange getTargetMutable();
  ::mlir::MutableOperandRange getVectorSizesMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::DenseI64ArrayAttr getStaticVectorSizesAttr();
  ::llvm::ArrayRef<int64_t> getStaticVectorSizes();
  void setStaticVectorSizesAttr(::mlir::DenseI64ArrayAttr attr);
  void setStaticVectorSizes(::std::optional<::llvm::ArrayRef<int64_t>> attrValue);
  ::mlir::Attribute removeStaticVectorSizesAttr();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value target, ::mlir::ValueRange vector_sizes, /*optional*/::mlir::DenseI64ArrayAttr static_vector_sizes);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::ValueRange vector_sizes, /*optional*/::mlir::DenseI64ArrayAttr static_vector_sizes);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value target, ::mlir::ValueRange vector_sizes, /*optional*/::llvm::ArrayRef<int64_t> static_vector_sizes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::ValueRange vector_sizes, /*optional*/::llvm::ArrayRef<int64_t> static_vector_sizes = {});
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
private:
  ::mlir::StringAttr getAttributeNameForIndex(unsigned index) {
    return getAttributeNameForIndex((*this)->getName(), index);
  }

  static ::mlir::StringAttr getAttributeNameForIndex(::mlir::OperationName name, unsigned index) {
    assert(index < 1 && "invalid attribute index");
    assert(name.getStringRef() == getOperationName() && "invalid operation name");
    return name.getAttributeNames()[index];
  }

public:
  // TODO: applyToOne.
  ::mlir::DiagnosedSilenceableFailure apply(
      ::mlir::transform::TransformResults &transformResults,
      ::mlir::transform::TransformState &state);

  ::llvm::SmallVector<::mlir::OpFoldResult> getMixedVectorSizes();
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::MaskedVectorizeOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::MatchOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class MatchOpGenericAdaptorBase {
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::mlir::RegionRange odsRegions;
  ::std::optional<::mlir::OperationName> odsOpName;
public:
  MatchOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
  ::mlir::ArrayAttr getOpsAttr();
  ::std::optional< ::mlir::ArrayAttr > getOps();
  mlir::transform::MatchInterfaceEnumAttr getInterfaceAttr();
  ::std::optional<mlir::transform::MatchInterfaceEnum> getInterface();
  ::mlir::DictionaryAttr getOpAttrsAttr();
  ::std::optional< ::mlir::DictionaryAttr > getOpAttrs();
  ::mlir::TypeAttr getFilterResultTypeAttr();
  ::std::optional<::mlir::Type> getFilterResultType();
};
} // namespace detail
template <typename RangeT>
class MatchOpGenericAdaptor : public detail::MatchOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::MatchOpGenericAdaptorBase;
public:
  MatchOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, ::mlir::RegionRange regions = {}) : Base(attrs, regions), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getTarget() {
    return *getODSOperands(0).begin();
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class MatchOpAdaptor : public MatchOpGenericAdaptor<::mlir::ValueRange> {
public:
  using MatchOpGenericAdaptor::MatchOpGenericAdaptor;
  MatchOpAdaptor(MatchOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class MatchOp : public ::mlir::Op<MatchOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::pdl::OperationType>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::transform::NavigationTransformOpTrait, ::mlir::transform::TransformOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = MatchOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = MatchOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("filter_result_type"), ::llvm::StringRef("interface"), ::llvm::StringRef("op_attrs"), ::llvm::StringRef("ops")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getFilterResultTypeAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getFilterResultTypeAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getInterfaceAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getInterfaceAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  ::mlir::StringAttr getOpAttrsAttrName() {
    return getAttributeNameForIndex(2);
  }

  static ::mlir::StringAttr getOpAttrsAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 2);
  }

  ::mlir::StringAttr getOpsAttrName() {
    return getAttributeNameForIndex(3);
  }

  static ::mlir::StringAttr getOpsAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 3);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.structured.match");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::pdl::OperationType> getTarget();
  ::mlir::MutableOperandRange getTargetMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::pdl::OperationType> getResults();
  ::mlir::ArrayAttr getOpsAttr();
  ::std::optional< ::mlir::ArrayAttr > getOps();
  mlir::transform::MatchInterfaceEnumAttr getInterfaceAttr();
  ::std::optional<mlir::transform::MatchInterfaceEnum> getInterface();
  ::mlir::DictionaryAttr getOpAttrsAttr();
  ::std::optional< ::mlir::DictionaryAttr > getOpAttrs();
  ::mlir::TypeAttr getFilterResultTypeAttr();
  ::std::optional<::mlir::Type> getFilterResultType();
  void setOpsAttr(::mlir::ArrayAttr attr);
  void setInterfaceAttr(mlir::transform::MatchInterfaceEnumAttr attr);
  void setInterface(::std::optional<mlir::transform::MatchInterfaceEnum> attrValue);
  void setOpAttrsAttr(::mlir::DictionaryAttr attr);
  void setFilterResultTypeAttr(::mlir::TypeAttr attr);
  void setFilterResultType(::std::optional<::mlir::Type> attrValue);
  ::mlir::Attribute removeOpsAttr();
  ::mlir::Attribute removeInterfaceAttr();
  ::mlir::Attribute removeOpAttrsAttr();
  ::mlir::Attribute removeFilterResultTypeAttr();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, Value target, ArrayRef<StringRef> opNames);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type results, ::mlir::Value target, /*optional*/::mlir::ArrayAttr ops, /*optional*/mlir::transform::MatchInterfaceEnumAttr interface, /*optional*/::mlir::DictionaryAttr op_attrs, /*optional*/::mlir::TypeAttr filter_result_type);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, /*optional*/::mlir::ArrayAttr ops, /*optional*/mlir::transform::MatchInterfaceEnumAttr interface, /*optional*/::mlir::DictionaryAttr op_attrs, /*optional*/::mlir::TypeAttr filter_result_type);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::DiagnosedSilenceableFailure apply(::mlir::transform::TransformResults &transformResults, ::mlir::transform::TransformState &state);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
private:
  ::mlir::StringAttr getAttributeNameForIndex(unsigned index) {
    return getAttributeNameForIndex((*this)->getName(), index);
  }

  static ::mlir::StringAttr getAttributeNameForIndex(::mlir::OperationName name, unsigned index) {
    assert(index < 4 && "invalid attribute index");
    assert(name.getStringRef() == getOperationName() && "invalid operation name");
    return name.getAttributeNames()[index];
  }

public:
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::MatchOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::MultiTileSizesOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class MultiTileSizesOpGenericAdaptorBase {
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::mlir::RegionRange odsRegions;
  ::std::optional<::mlir::OperationName> odsOpName;
public:
  MultiTileSizesOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
  ::mlir::IntegerAttr getDimensionAttr();
  uint64_t getDimension();
  ::mlir::IntegerAttr getTargetSizeAttr();
  uint64_t getTargetSize();
  ::mlir::IntegerAttr getDivisorAttr();
  uint64_t getDivisor();
};
} // namespace detail
template <typename RangeT>
class MultiTileSizesOpGenericAdaptor : public detail::MultiTileSizesOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::MultiTileSizesOpGenericAdaptorBase;
public:
  MultiTileSizesOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, ::mlir::RegionRange regions = {}) : Base(attrs, regions), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getTarget() {
    return *getODSOperands(0).begin();
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class MultiTileSizesOpAdaptor : public MultiTileSizesOpGenericAdaptor<::mlir::ValueRange> {
public:
  using MultiTileSizesOpGenericAdaptor::MultiTileSizesOpGenericAdaptor;
  MultiTileSizesOpAdaptor(MultiTileSizesOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class MultiTileSizesOp : public ::mlir::Op<MultiTileSizesOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::NResults<3>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::transform::TransformOpInterface::Trait, ::mlir::transform::TransformEachOpTrait, ::mlir::OpAsmOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = MultiTileSizesOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = MultiTileSizesOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("dimension"), ::llvm::StringRef("divisor"), ::llvm::StringRef("target_size")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getDimensionAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getDimensionAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getDivisorAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getDivisorAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  ::mlir::StringAttr getTargetSizeAttrName() {
    return getAttributeNameForIndex(2);
  }

  static ::mlir::StringAttr getTargetSizeAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 2);
  }

  void getAsmResultNames(::mlir::OpAsmSetValueNameFn setNameFn);
  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.structured.multitile_sizes");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getTarget();
  ::mlir::MutableOperandRange getTargetMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value getLowSize();
  ::mlir::Value getHighSize();
  ::mlir::Value getSplitPoint();
  ::mlir::IntegerAttr getDimensionAttr();
  uint64_t getDimension();
  ::mlir::IntegerAttr getTargetSizeAttr();
  uint64_t getTargetSize();
  ::mlir::IntegerAttr getDivisorAttr();
  uint64_t getDivisor();
  void setDimensionAttr(::mlir::IntegerAttr attr);
  void setDimension(uint64_t attrValue);
  void setTargetSizeAttr(::mlir::IntegerAttr attr);
  void setTargetSize(uint64_t attrValue);
  void setDivisorAttr(::mlir::IntegerAttr attr);
  void setDivisor(uint64_t attrValue);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type low_size, ::mlir::Type high_size, ::mlir::Type split_point, ::mlir::Value target, ::mlir::IntegerAttr dimension, ::mlir::IntegerAttr target_size, ::mlir::IntegerAttr divisor);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::IntegerAttr dimension, ::mlir::IntegerAttr target_size, ::mlir::IntegerAttr divisor);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type low_size, ::mlir::Type high_size, ::mlir::Type split_point, ::mlir::Value target, uint64_t dimension, uint64_t target_size, uint64_t divisor = 1);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, uint64_t dimension, uint64_t target_size, uint64_t divisor = 1);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void populateDefaultAttrs(const ::mlir::OperationName &opName, ::mlir::NamedAttrList &attributes);
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::LogicalResult verify();
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
private:
  ::mlir::StringAttr getAttributeNameForIndex(unsigned index) {
    return getAttributeNameForIndex((*this)->getName(), index);
  }

  static ::mlir::StringAttr getAttributeNameForIndex(::mlir::OperationName name, unsigned index) {
    assert(index < 3 && "invalid attribute index");
    assert(name.getStringRef() == getOperationName() && "invalid operation name");
    return name.getAttributeNames()[index];
  }

public:
  ::mlir::DiagnosedSilenceableFailure applyToOne(
      ::mlir::linalg::LinalgOp target,
      ::mlir::transform::ApplyToEachResultList &results,
      TransformState &state);
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::MultiTileSizesOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::PackOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class PackOpGenericAdaptorBase {
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::mlir::RegionRange odsRegions;
  ::std::optional<::mlir::OperationName> odsOpName;
public:
  PackOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
  ::mlir::DenseI64ArrayAttr getStaticPackedSizesAttr();
  ::llvm::ArrayRef<int64_t> getStaticPackedSizes();
};
} // namespace detail
template <typename RangeT>
class PackOpGenericAdaptor : public detail::PackOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::PackOpGenericAdaptorBase;
public:
  PackOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, ::mlir::RegionRange regions = {}) : Base(attrs, regions), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getTarget() {
    return *getODSOperands(0).begin();
  }

  RangeT getPackedSizes() {
    return getODSOperands(1);
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class PackOpAdaptor : public PackOpGenericAdaptor<::mlir::ValueRange> {
public:
  using PackOpGenericAdaptor::PackOpGenericAdaptor;
  PackOpAdaptor(PackOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class PackOp : public ::mlir::Op<PackOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::transform::TransformHandleTypeInterface>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::AtLeastNOperands<1>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::transform::TransformOpInterface::Trait, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = PackOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = PackOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("static_packed_sizes")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getStaticPackedSizesAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getStaticPackedSizesAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.structured.pack");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getTarget();
  ::mlir::Operation::operand_range getPackedSizes();
  ::mlir::MutableOperandRange getTargetMutable();
  ::mlir::MutableOperandRange getPackedSizesMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getPackedOp();
  ::mlir::DenseI64ArrayAttr getStaticPackedSizesAttr();
  ::llvm::ArrayRef<int64_t> getStaticPackedSizes();
  void setStaticPackedSizesAttr(::mlir::DenseI64ArrayAttr attr);
  void setStaticPackedSizes(::llvm::ArrayRef<int64_t> attrValue);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, Value target, ArrayRef<OpFoldResult> mixedPackedSizes);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type packed_op, ::mlir::Value target, ::mlir::ValueRange packed_sizes, ::mlir::DenseI64ArrayAttr static_packed_sizes);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::ValueRange packed_sizes, ::mlir::DenseI64ArrayAttr static_packed_sizes);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type packed_op, ::mlir::Value target, ::mlir::ValueRange packed_sizes, ::llvm::ArrayRef<int64_t> static_packed_sizes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::ValueRange packed_sizes, ::llvm::ArrayRef<int64_t> static_packed_sizes = {});
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void populateDefaultAttrs(const ::mlir::OperationName &opName, ::mlir::NamedAttrList &attributes);
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::DiagnosedSilenceableFailure apply(::mlir::transform::TransformResults &transformResults, ::mlir::transform::TransformState &state);
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
private:
  ::mlir::StringAttr getAttributeNameForIndex(unsigned index) {
    return getAttributeNameForIndex((*this)->getName(), index);
  }

  static ::mlir::StringAttr getAttributeNameForIndex(::mlir::OperationName name, unsigned index) {
    assert(index < 1 && "invalid attribute index");
    assert(name.getStringRef() == getOperationName() && "invalid operation name");
    return name.getAttributeNames()[index];
  }

public:
  ::llvm::SmallVector<::mlir::OpFoldResult> getMixedPackedSizes();
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::PackOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::PackTransposeOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class PackTransposeOpGenericAdaptorBase {
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::mlir::RegionRange odsRegions;
  ::std::optional<::mlir::OperationName> odsOpName;
public:
  PackTransposeOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
  ::mlir::DenseI64ArrayAttr getOuterPermAttr();
  ::llvm::ArrayRef<int64_t> getOuterPerm();
  ::mlir::DenseI64ArrayAttr getInnerPermAttr();
  ::llvm::ArrayRef<int64_t> getInnerPerm();
};
} // namespace detail
template <typename RangeT>
class PackTransposeOpGenericAdaptor : public detail::PackTransposeOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::PackTransposeOpGenericAdaptorBase;
public:
  PackTransposeOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, ::mlir::RegionRange regions = {}) : Base(attrs, regions), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getTargetPackOrUnPackOp() {
    return *getODSOperands(0).begin();
  }

  ValueT getTargetLinalgOp() {
    return *getODSOperands(1).begin();
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class PackTransposeOpAdaptor : public PackTransposeOpGenericAdaptor<::mlir::ValueRange> {
public:
  using PackTransposeOpGenericAdaptor::PackTransposeOpGenericAdaptor;
  PackTransposeOpAdaptor(PackTransposeOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class PackTransposeOp : public ::mlir::Op<PackTransposeOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::NResults<3>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::NOperands<2>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::transform::FunctionalStyleTransformOpTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::transform::TransformOpInterface::Trait, ::mlir::OpAsmOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = PackTransposeOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = PackTransposeOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("inner_perm"), ::llvm::StringRef("outer_perm")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getInnerPermAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getInnerPermAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getOuterPermAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getOuterPermAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  void getAsmResultNames(::mlir::OpAsmSetValueNameFn setNameFn);
  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.structured.pack_transpose");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getTargetPackOrUnPackOp();
  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getTargetLinalgOp();
  ::mlir::MutableOperandRange getTargetPackOrUnPackOpMutable();
  ::mlir::MutableOperandRange getTargetLinalgOpMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getPackedOp();
  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getPackOp();
  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getUnPackOp();
  ::mlir::DenseI64ArrayAttr getOuterPermAttr();
  ::llvm::ArrayRef<int64_t> getOuterPerm();
  ::mlir::DenseI64ArrayAttr getInnerPermAttr();
  ::llvm::ArrayRef<int64_t> getInnerPerm();
  void setOuterPermAttr(::mlir::DenseI64ArrayAttr attr);
  void setOuterPerm(::std::optional<::llvm::ArrayRef<int64_t>> attrValue);
  void setInnerPermAttr(::mlir::DenseI64ArrayAttr attr);
  void setInnerPerm(::std::optional<::llvm::ArrayRef<int64_t>> attrValue);
  ::mlir::Attribute removeOuterPermAttr();
  ::mlir::Attribute removeInnerPermAttr();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type packed_op, ::mlir::Type pack_op, ::mlir::Type un_pack_op, ::mlir::Value target_pack_or_un_pack_op, ::mlir::Value target_linalg_op, /*optional*/::mlir::DenseI64ArrayAttr outer_perm, /*optional*/::mlir::DenseI64ArrayAttr inner_perm);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target_pack_or_un_pack_op, ::mlir::Value target_linalg_op, /*optional*/::mlir::DenseI64ArrayAttr outer_perm, /*optional*/::mlir::DenseI64ArrayAttr inner_perm);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type packed_op, ::mlir::Type pack_op, ::mlir::Type un_pack_op, ::mlir::Value target_pack_or_un_pack_op, ::mlir::Value target_linalg_op, /*optional*/::llvm::ArrayRef<int64_t> outer_perm = {}, /*optional*/::llvm::ArrayRef<int64_t> inner_perm = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target_pack_or_un_pack_op, ::mlir::Value target_linalg_op, /*optional*/::llvm::ArrayRef<int64_t> outer_perm = {}, /*optional*/::llvm::ArrayRef<int64_t> inner_perm = {});
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::LogicalResult verify();
  ::mlir::DiagnosedSilenceableFailure apply(::mlir::transform::TransformResults &transformResults, ::mlir::transform::TransformState &state);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
private:
  ::mlir::StringAttr getAttributeNameForIndex(unsigned index) {
    return getAttributeNameForIndex((*this)->getName(), index);
  }

  static ::mlir::StringAttr getAttributeNameForIndex(::mlir::OperationName name, unsigned index) {
    assert(index < 2 && "invalid attribute index");
    assert(name.getStringRef() == getOperationName() && "invalid operation name");
    return name.getAttributeNames()[index];
  }

public:
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::PackTransposeOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::PadOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class PadOpGenericAdaptorBase {
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::mlir::RegionRange odsRegions;
  ::std::optional<::mlir::OperationName> odsOpName;
public:
  PadOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
  ::mlir::ArrayAttr getPaddingValuesAttr();
  ::mlir::ArrayAttr getPaddingValues();
  ::mlir::ArrayAttr getPaddingDimensionsAttr();
  ::mlir::ArrayAttr getPaddingDimensions();
  ::mlir::ArrayAttr getPackPaddingsAttr();
  ::mlir::ArrayAttr getPackPaddings();
  ::mlir::ArrayAttr getHoistPaddingsAttr();
  ::mlir::ArrayAttr getHoistPaddings();
  ::mlir::ArrayAttr getTransposePaddingsAttr();
  ::mlir::ArrayAttr getTransposePaddings();
};
} // namespace detail
template <typename RangeT>
class PadOpGenericAdaptor : public detail::PadOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::PadOpGenericAdaptorBase;
public:
  PadOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, ::mlir::RegionRange regions = {}) : Base(attrs, regions), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getTarget() {
    return *getODSOperands(0).begin();
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class PadOpAdaptor : public PadOpGenericAdaptor<::mlir::ValueRange> {
public:
  using PadOpGenericAdaptor::PadOpGenericAdaptor;
  PadOpAdaptor(PadOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class PadOp : public ::mlir::Op<PadOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::pdl::OperationType>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::transform::FunctionalStyleTransformOpTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::transform::TransformOpInterface::Trait, ::mlir::transform::TransformEachOpTrait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = PadOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = PadOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("hoist_paddings"), ::llvm::StringRef("pack_paddings"), ::llvm::StringRef("padding_dimensions"), ::llvm::StringRef("padding_values"), ::llvm::StringRef("transpose_paddings")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getHoistPaddingsAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getHoistPaddingsAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getPackPaddingsAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getPackPaddingsAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  ::mlir::StringAttr getPaddingDimensionsAttrName() {
    return getAttributeNameForIndex(2);
  }

  static ::mlir::StringAttr getPaddingDimensionsAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 2);
  }

  ::mlir::StringAttr getPaddingValuesAttrName() {
    return getAttributeNameForIndex(3);
  }

  static ::mlir::StringAttr getPaddingValuesAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 3);
  }

  ::mlir::StringAttr getTransposePaddingsAttrName() {
    return getAttributeNameForIndex(4);
  }

  static ::mlir::StringAttr getTransposePaddingsAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 4);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.structured.pad");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::pdl::OperationType> getTarget();
  ::mlir::MutableOperandRange getTargetMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::pdl::OperationType> getTransformed();
  ::mlir::ArrayAttr getPaddingValuesAttr();
  ::mlir::ArrayAttr getPaddingValues();
  ::mlir::ArrayAttr getPaddingDimensionsAttr();
  ::mlir::ArrayAttr getPaddingDimensions();
  ::mlir::ArrayAttr getPackPaddingsAttr();
  ::mlir::ArrayAttr getPackPaddings();
  ::mlir::ArrayAttr getHoistPaddingsAttr();
  ::mlir::ArrayAttr getHoistPaddings();
  ::mlir::ArrayAttr getTransposePaddingsAttr();
  ::mlir::ArrayAttr getTransposePaddings();
  void setPaddingValuesAttr(::mlir::ArrayAttr attr);
  void setPaddingDimensionsAttr(::mlir::ArrayAttr attr);
  void setPackPaddingsAttr(::mlir::ArrayAttr attr);
  void setHoistPaddingsAttr(::mlir::ArrayAttr attr);
  void setTransposePaddingsAttr(::mlir::ArrayAttr attr);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type transformed, ::mlir::Value target, ::mlir::ArrayAttr padding_values, ::mlir::ArrayAttr padding_dimensions, ::mlir::ArrayAttr pack_paddings, ::mlir::ArrayAttr hoist_paddings, ::mlir::ArrayAttr transpose_paddings);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::ArrayAttr padding_values, ::mlir::ArrayAttr padding_dimensions, ::mlir::ArrayAttr pack_paddings, ::mlir::ArrayAttr hoist_paddings, ::mlir::ArrayAttr transpose_paddings);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void populateDefaultAttrs(const ::mlir::OperationName &opName, ::mlir::NamedAttrList &attributes);
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::LogicalResult verify();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
private:
  ::mlir::StringAttr getAttributeNameForIndex(unsigned index) {
    return getAttributeNameForIndex((*this)->getName(), index);
  }

  static ::mlir::StringAttr getAttributeNameForIndex(::mlir::OperationName name, unsigned index) {
    assert(index < 5 && "invalid attribute index");
    assert(name.getStringRef() == getOperationName() && "invalid operation name");
    return name.getAttributeNames()[index];
  }

public:
  ::mlir::DiagnosedSilenceableFailure applyToOne(
      ::mlir::linalg::LinalgOp target,
      ::mlir::transform::ApplyToEachResultList &results,
      ::mlir::transform::TransformState &state);
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::PadOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::PromoteOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class PromoteOpGenericAdaptorBase {
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::mlir::RegionRange odsRegions;
  ::std::optional<::mlir::OperationName> odsOpName;
public:
  PromoteOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
  ::mlir::ArrayAttr getOperandsToPromoteAttr();
  ::mlir::ArrayAttr getOperandsToPromote();
  ::mlir::ArrayAttr getUseFullTileBuffersAttr();
  ::mlir::ArrayAttr getUseFullTileBuffers();
  ::mlir::UnitAttr getUseFullTilesByDefaultAttr();
  bool getUseFullTilesByDefault();
  ::mlir::UnitAttr getUseAllocaAttr();
  bool getUseAlloca();
  ::mlir::IntegerAttr getAlignmentAttr();
  ::std::optional<uint64_t> getAlignment();
};
} // namespace detail
template <typename RangeT>
class PromoteOpGenericAdaptor : public detail::PromoteOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::PromoteOpGenericAdaptorBase;
public:
  PromoteOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, ::mlir::RegionRange regions = {}) : Base(attrs, regions), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getTarget() {
    return *getODSOperands(0).begin();
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class PromoteOpAdaptor : public PromoteOpGenericAdaptor<::mlir::ValueRange> {
public:
  using PromoteOpGenericAdaptor::PromoteOpGenericAdaptor;
  PromoteOpAdaptor(PromoteOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class PromoteOp : public ::mlir::Op<PromoteOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::pdl::OperationType>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::transform::FunctionalStyleTransformOpTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::transform::TransformOpInterface::Trait, ::mlir::transform::TransformEachOpTrait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = PromoteOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = PromoteOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("alignment"), ::llvm::StringRef("operands_to_promote"), ::llvm::StringRef("use_alloca"), ::llvm::StringRef("use_full_tile_buffers"), ::llvm::StringRef("use_full_tiles_by_default")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getAlignmentAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getAlignmentAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getOperandsToPromoteAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getOperandsToPromoteAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  ::mlir::StringAttr getUseAllocaAttrName() {
    return getAttributeNameForIndex(2);
  }

  static ::mlir::StringAttr getUseAllocaAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 2);
  }

  ::mlir::StringAttr getUseFullTileBuffersAttrName() {
    return getAttributeNameForIndex(3);
  }

  static ::mlir::StringAttr getUseFullTileBuffersAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 3);
  }

  ::mlir::StringAttr getUseFullTilesByDefaultAttrName() {
    return getAttributeNameForIndex(4);
  }

  static ::mlir::StringAttr getUseFullTilesByDefaultAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 4);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.structured.promote");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::pdl::OperationType> getTarget();
  ::mlir::MutableOperandRange getTargetMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::pdl::OperationType> getTransformed();
  ::mlir::ArrayAttr getOperandsToPromoteAttr();
  ::mlir::ArrayAttr getOperandsToPromote();
  ::mlir::ArrayAttr getUseFullTileBuffersAttr();
  ::mlir::ArrayAttr getUseFullTileBuffers();
  ::mlir::UnitAttr getUseFullTilesByDefaultAttr();
  bool getUseFullTilesByDefault();
  ::mlir::UnitAttr getUseAllocaAttr();
  bool getUseAlloca();
  ::mlir::IntegerAttr getAlignmentAttr();
  ::std::optional<uint64_t> getAlignment();
  void setOperandsToPromoteAttr(::mlir::ArrayAttr attr);
  void setUseFullTileBuffersAttr(::mlir::ArrayAttr attr);
  void setUseFullTilesByDefaultAttr(::mlir::UnitAttr attr);
  void setUseFullTilesByDefault(bool attrValue);
  void setUseAllocaAttr(::mlir::UnitAttr attr);
  void setUseAlloca(bool attrValue);
  void setAlignmentAttr(::mlir::IntegerAttr attr);
  void setAlignment(::std::optional<uint64_t> attrValue);
  ::mlir::Attribute removeUseFullTilesByDefaultAttr();
  ::mlir::Attribute removeUseAllocaAttr();
  ::mlir::Attribute removeAlignmentAttr();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type transformed, ::mlir::Value target, ::mlir::ArrayAttr operands_to_promote, ::mlir::ArrayAttr use_full_tile_buffers, /*optional*/::mlir::UnitAttr use_full_tiles_by_default, /*optional*/::mlir::UnitAttr use_alloca, /*optional*/::mlir::IntegerAttr alignment);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::ArrayAttr operands_to_promote, ::mlir::ArrayAttr use_full_tile_buffers, /*optional*/::mlir::UnitAttr use_full_tiles_by_default, /*optional*/::mlir::UnitAttr use_alloca, /*optional*/::mlir::IntegerAttr alignment);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type transformed, ::mlir::Value target, ::mlir::ArrayAttr operands_to_promote, ::mlir::ArrayAttr use_full_tile_buffers, /*optional*/bool use_full_tiles_by_default, /*optional*/bool use_alloca, /*optional*/::mlir::IntegerAttr alignment);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::ArrayAttr operands_to_promote, ::mlir::ArrayAttr use_full_tile_buffers, /*optional*/bool use_full_tiles_by_default, /*optional*/bool use_alloca, /*optional*/::mlir::IntegerAttr alignment);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void populateDefaultAttrs(const ::mlir::OperationName &opName, ::mlir::NamedAttrList &attributes);
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
private:
  ::mlir::StringAttr getAttributeNameForIndex(unsigned index) {
    return getAttributeNameForIndex((*this)->getName(), index);
  }

  static ::mlir::StringAttr getAttributeNameForIndex(::mlir::OperationName name, unsigned index) {
    assert(index < 5 && "invalid attribute index");
    assert(name.getStringRef() == getOperationName() && "invalid operation name");
    return name.getAttributeNames()[index];
  }

public:
  ::mlir::DiagnosedSilenceableFailure applyToOne(
      ::mlir::linalg::LinalgOp target,
      ::mlir::transform::ApplyToEachResultList &results,
      ::mlir::transform::TransformState &state);
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::PromoteOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ReplaceOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class ReplaceOpGenericAdaptorBase {
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::mlir::RegionRange odsRegions;
  ::std::optional<::mlir::OperationName> odsOpName;
public:
  ReplaceOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
  ::mlir::Region &getBodyRegion();
  ::mlir::RegionRange getRegions();
};
} // namespace detail
template <typename RangeT>
class ReplaceOpGenericAdaptor : public detail::ReplaceOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::ReplaceOpGenericAdaptorBase;
public:
  ReplaceOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, ::mlir::RegionRange regions = {}) : Base(attrs, regions), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getTarget() {
    return *getODSOperands(0).begin();
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class ReplaceOpAdaptor : public ReplaceOpGenericAdaptor<::mlir::ValueRange> {
public:
  using ReplaceOpGenericAdaptor::ReplaceOpGenericAdaptor;
  ReplaceOpAdaptor(ReplaceOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class ReplaceOp : public ::mlir::Op<ReplaceOp, ::mlir::OpTrait::OneRegion, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::pdl::OperationType>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::NoTerminator, ::mlir::OpTrait::SingleBlock, ::mlir::OpTrait::OpInvariants, ::mlir::OpTrait::IsIsolatedFromAbove, ::mlir::transform::TransformOpInterface::Trait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::RegionKindInterface::Trait, ::mlir::OpTrait::HasOnlyGraphRegion> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = ReplaceOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = ReplaceOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.structured.replace");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::pdl::OperationType> getTarget();
  ::mlir::MutableOperandRange getTargetMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::pdl::OperationType> getReplacement();
  ::mlir::Region &getBodyRegion();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type replacement, ::mlir::Value target);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::LogicalResult verify();
  ::mlir::DiagnosedSilenceableFailure apply(::mlir::transform::TransformResults &transformResults, ::mlir::transform::TransformState &state);
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::ReplaceOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ScalarizeOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class ScalarizeOpGenericAdaptorBase {
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::mlir::RegionRange odsRegions;
  ::std::optional<::mlir::OperationName> odsOpName;
public:
  ScalarizeOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class ScalarizeOpGenericAdaptor : public detail::ScalarizeOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::ScalarizeOpGenericAdaptorBase;
public:
  ScalarizeOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, ::mlir::RegionRange regions = {}) : Base(attrs, regions), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getTarget() {
    return *getODSOperands(0).begin();
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class ScalarizeOpAdaptor : public ScalarizeOpGenericAdaptor<::mlir::ValueRange> {
public:
  using ScalarizeOpGenericAdaptor::ScalarizeOpGenericAdaptor;
  ScalarizeOpAdaptor(ScalarizeOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class ScalarizeOp : public ::mlir::Op<ScalarizeOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::pdl::OperationType>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::transform::FunctionalStyleTransformOpTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::transform::TransformOpInterface::Trait, ::mlir::transform::TransformEachOpTrait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = ScalarizeOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = ScalarizeOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.structured.scalarize");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::pdl::OperationType> getTarget();
  ::mlir::MutableOperandRange getTargetMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::pdl::OperationType> getResult();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value target);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
  ::mlir::DiagnosedSilenceableFailure applyToOne(
      ::mlir::linalg::LinalgOp target,
      ::mlir::transform::ApplyToEachResultList &results,
      ::mlir::transform::TransformState &state);
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::ScalarizeOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::SplitOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class SplitOpGenericAdaptorBase {
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::mlir::RegionRange odsRegions;
  ::std::optional<::mlir::OperationName> odsOpName;
public:
  SplitOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
  ::mlir::IntegerAttr getDimensionAttr();
  uint64_t getDimension();
  ::mlir::IntegerAttr getStaticSplitPointAttr();
  uint64_t getStaticSplitPoint();
};
} // namespace detail
template <typename RangeT>
class SplitOpGenericAdaptor : public detail::SplitOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::SplitOpGenericAdaptorBase;
public:
  SplitOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, ::mlir::RegionRange regions = {}) : Base(attrs, regions), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getTarget() {
    return *getODSOperands(0).begin();
  }

  ValueT getDynamicSplitPoint() {
    auto operands = getODSOperands(1);
    return operands.empty() ? ValueT{} : *operands.begin();
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class SplitOpAdaptor : public SplitOpGenericAdaptor<::mlir::ValueRange> {
public:
  using SplitOpGenericAdaptor::SplitOpGenericAdaptor;
  SplitOpAdaptor(SplitOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class SplitOp : public ::mlir::Op<SplitOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::NResults<2>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::AtLeastNOperands<1>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::transform::TransformOpInterface::Trait, ::mlir::OpAsmOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = SplitOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = SplitOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("dimension"), ::llvm::StringRef("static_split_point")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getDimensionAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getDimensionAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getStaticSplitPointAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getStaticSplitPointAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  void getAsmResultNames(::mlir::OpAsmSetValueNameFn setNameFn);
  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.structured.split");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getTarget();
  ::mlir::Value getDynamicSplitPoint();
  ::mlir::MutableOperandRange getTargetMutable();
  ::mlir::MutableOperandRange getDynamicSplitPointMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getFirst();
  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getSecond();
  ::mlir::IntegerAttr getDimensionAttr();
  uint64_t getDimension();
  ::mlir::IntegerAttr getStaticSplitPointAttr();
  uint64_t getStaticSplitPoint();
  void setDimensionAttr(::mlir::IntegerAttr attr);
  void setDimension(uint64_t attrValue);
  void setStaticSplitPointAttr(::mlir::IntegerAttr attr);
  void setStaticSplitPoint(uint64_t attrValue);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type first, ::mlir::Type second, ::mlir::Value target, ::mlir::IntegerAttr dimension, /*optional*/::mlir::Value dynamic_split_point, ::mlir::IntegerAttr static_split_point);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::IntegerAttr dimension, /*optional*/::mlir::Value dynamic_split_point, ::mlir::IntegerAttr static_split_point);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type first, ::mlir::Type second, ::mlir::Value target, uint64_t dimension, /*optional*/::mlir::Value dynamic_split_point, uint64_t static_split_point);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, uint64_t dimension, /*optional*/::mlir::Value dynamic_split_point, uint64_t static_split_point);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::LogicalResult verify();
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
  ::mlir::DiagnosedSilenceableFailure apply(::mlir::transform::TransformResults &transformResults, ::mlir::transform::TransformState &state);
private:
  ::mlir::StringAttr getAttributeNameForIndex(unsigned index) {
    return getAttributeNameForIndex((*this)->getName(), index);
  }

  static ::mlir::StringAttr getAttributeNameForIndex(::mlir::OperationName name, unsigned index) {
    assert(index < 2 && "invalid attribute index");
    assert(name.getStringRef() == getOperationName() && "invalid operation name");
    return name.getAttributeNames()[index];
  }

public:
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::SplitOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::SplitReductionOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class SplitReductionOpGenericAdaptorBase {
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::mlir::RegionRange odsRegions;
  ::std::optional<::mlir::OperationName> odsOpName;
public:
  SplitReductionOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
  ::mlir::IntegerAttr getSplitFactorAttr();
  uint64_t getSplitFactor();
  ::mlir::IntegerAttr getInsertSplitDimensionAttr();
  uint64_t getInsertSplitDimension();
  ::mlir::UnitAttr getInnerParallelAttr();
  bool getInnerParallel();
  ::mlir::UnitAttr getUseScalingAlgorithmAttr();
  bool getUseScalingAlgorithm();
  ::mlir::UnitAttr getUseAllocAttr();
  bool getUseAlloc();
};
} // namespace detail
template <typename RangeT>
class SplitReductionOpGenericAdaptor : public detail::SplitReductionOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::SplitReductionOpGenericAdaptorBase;
public:
  SplitReductionOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, ::mlir::RegionRange regions = {}) : Base(attrs, regions), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getTarget() {
    return *getODSOperands(0).begin();
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class SplitReductionOpAdaptor : public SplitReductionOpGenericAdaptor<::mlir::ValueRange> {
public:
  using SplitReductionOpGenericAdaptor::SplitReductionOpGenericAdaptor;
  SplitReductionOpAdaptor(SplitReductionOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class SplitReductionOp : public ::mlir::Op<SplitReductionOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::NResults<4>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::transform::FunctionalStyleTransformOpTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::transform::TransformEachOpTrait, ::mlir::transform::TransformOpInterface::Trait, ::mlir::OpAsmOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = SplitReductionOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = SplitReductionOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("inner_parallel"), ::llvm::StringRef("insert_split_dimension"), ::llvm::StringRef("split_factor"), ::llvm::StringRef("use_alloc"), ::llvm::StringRef("use_scaling_algorithm")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getInnerParallelAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getInnerParallelAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getInsertSplitDimensionAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getInsertSplitDimensionAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  ::mlir::StringAttr getSplitFactorAttrName() {
    return getAttributeNameForIndex(2);
  }

  static ::mlir::StringAttr getSplitFactorAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 2);
  }

  ::mlir::StringAttr getUseAllocAttrName() {
    return getAttributeNameForIndex(3);
  }

  static ::mlir::StringAttr getUseAllocAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 3);
  }

  ::mlir::StringAttr getUseScalingAlgorithmAttrName() {
    return getAttributeNameForIndex(4);
  }

  static ::mlir::StringAttr getUseScalingAlgorithmAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 4);
  }

  void getAsmResultNames(::mlir::OpAsmSetValueNameFn setNameFn);
  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.structured.split_reduction");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::pdl::OperationType> getTarget();
  ::mlir::MutableOperandRange getTargetMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::pdl::OperationType> getInitOrAllocOp();
  ::mlir::TypedValue<::mlir::pdl::OperationType> getFillOp();
  ::mlir::TypedValue<::mlir::pdl::OperationType> getSplitLinalgOp();
  ::mlir::TypedValue<::mlir::pdl::OperationType> getCombiningLinalgOp();
  ::mlir::IntegerAttr getSplitFactorAttr();
  uint64_t getSplitFactor();
  ::mlir::IntegerAttr getInsertSplitDimensionAttr();
  uint64_t getInsertSplitDimension();
  ::mlir::UnitAttr getInnerParallelAttr();
  bool getInnerParallel();
  ::mlir::UnitAttr getUseScalingAlgorithmAttr();
  bool getUseScalingAlgorithm();
  ::mlir::UnitAttr getUseAllocAttr();
  bool getUseAlloc();
  void setSplitFactorAttr(::mlir::IntegerAttr attr);
  void setSplitFactor(uint64_t attrValue);
  void setInsertSplitDimensionAttr(::mlir::IntegerAttr attr);
  void setInsertSplitDimension(uint64_t attrValue);
  void setInnerParallelAttr(::mlir::UnitAttr attr);
  void setInnerParallel(bool attrValue);
  void setUseScalingAlgorithmAttr(::mlir::UnitAttr attr);
  void setUseScalingAlgorithm(bool attrValue);
  void setUseAllocAttr(::mlir::UnitAttr attr);
  void setUseAlloc(bool attrValue);
  ::mlir::Attribute removeInnerParallelAttr();
  ::mlir::Attribute removeUseScalingAlgorithmAttr();
  ::mlir::Attribute removeUseAllocAttr();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, Value target, int64_t splitFactor, int64_t insertSplitDimension, bool innerParallel = false, bool useScalingAlgorithm = false, bool useAlloc = false);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type init_or_alloc_op, ::mlir::Type fill_op, ::mlir::Type split_linalg_op, ::mlir::Type combining_linalg_op, ::mlir::Value target, ::mlir::IntegerAttr split_factor, ::mlir::IntegerAttr insert_split_dimension, /*optional*/::mlir::UnitAttr inner_parallel, /*optional*/::mlir::UnitAttr use_scaling_algorithm, /*optional*/::mlir::UnitAttr use_alloc);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::IntegerAttr split_factor, ::mlir::IntegerAttr insert_split_dimension, /*optional*/::mlir::UnitAttr inner_parallel, /*optional*/::mlir::UnitAttr use_scaling_algorithm, /*optional*/::mlir::UnitAttr use_alloc);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type init_or_alloc_op, ::mlir::Type fill_op, ::mlir::Type split_linalg_op, ::mlir::Type combining_linalg_op, ::mlir::Value target, uint64_t split_factor = {}, uint64_t insert_split_dimension = {}, /*optional*/bool inner_parallel = false, /*optional*/bool use_scaling_algorithm = false, /*optional*/bool use_alloc = false);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, uint64_t split_factor = {}, uint64_t insert_split_dimension = {}, /*optional*/bool inner_parallel = false, /*optional*/bool use_scaling_algorithm = false, /*optional*/bool use_alloc = false);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void populateDefaultAttrs(const ::mlir::OperationName &opName, ::mlir::NamedAttrList &attributes);
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
private:
  ::mlir::StringAttr getAttributeNameForIndex(unsigned index) {
    return getAttributeNameForIndex((*this)->getName(), index);
  }

  static ::mlir::StringAttr getAttributeNameForIndex(::mlir::OperationName name, unsigned index) {
    assert(index < 5 && "invalid attribute index");
    assert(name.getStringRef() == getOperationName() && "invalid operation name");
    return name.getAttributeNames()[index];
  }

public:
  ::mlir::DiagnosedSilenceableFailure applyToOne(
      ::mlir::linalg::LinalgOp target,
      ::mlir::transform::ApplyToEachResultList &results,
      ::mlir::transform::TransformState &state);
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::SplitReductionOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::TileOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class TileOpGenericAdaptorBase {
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::mlir::RegionRange odsRegions;
  ::std::optional<::mlir::OperationName> odsOpName;
public:
  TileOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
  ::mlir::DenseI64ArrayAttr getStaticSizesAttr();
  ::llvm::ArrayRef<int64_t> getStaticSizes();
  ::mlir::DenseI64ArrayAttr getInterchangeAttr();
  ::llvm::ArrayRef<int64_t> getInterchange();
};
} // namespace detail
template <typename RangeT>
class TileOpGenericAdaptor : public detail::TileOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::TileOpGenericAdaptorBase;
public:
  TileOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, ::mlir::RegionRange regions = {}) : Base(attrs, regions), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getTarget() {
    return *getODSOperands(0).begin();
  }

  RangeT getDynamicSizes() {
    return getODSOperands(1);
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class TileOpAdaptor : public TileOpGenericAdaptor<::mlir::ValueRange> {
public:
  using TileOpGenericAdaptor::TileOpGenericAdaptor;
  TileOpAdaptor(TileOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class TileOp : public ::mlir::Op<TileOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::AtLeastNResults<1>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::AtLeastNOperands<1>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::transform::TransformOpInterface::Trait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::OpAsmOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = TileOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = TileOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("interchange"), ::llvm::StringRef("static_sizes")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getInterchangeAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getInterchangeAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getStaticSizesAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getStaticSizesAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  void getAsmResultNames(::mlir::OpAsmSetValueNameFn setNameFn);
  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.structured.tile");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getTarget();
  ::mlir::Operation::operand_range getDynamicSizes();
  ::mlir::MutableOperandRange getTargetMutable();
  ::mlir::MutableOperandRange getDynamicSizesMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getTiledLinalgOp();
  ::mlir::Operation::result_range getLoops();
  ::mlir::DenseI64ArrayAttr getStaticSizesAttr();
  ::llvm::ArrayRef<int64_t> getStaticSizes();
  ::mlir::DenseI64ArrayAttr getInterchangeAttr();
  ::llvm::ArrayRef<int64_t> getInterchange();
  void setStaticSizesAttr(::mlir::DenseI64ArrayAttr attr);
  void setStaticSizes(::std::optional<::llvm::ArrayRef<int64_t>> attrValue);
  void setInterchangeAttr(::mlir::DenseI64ArrayAttr attr);
  void setInterchange(::std::optional<::llvm::ArrayRef<int64_t>> attrValue);
  ::mlir::Attribute removeStaticSizesAttr();
  ::mlir::Attribute removeInterchangeAttr();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, TypeRange loopTypes, Value target, ArrayRef<int64_t> staticTileSizes, ArrayRef<int64_t> interchange = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, TypeRange loopTypes, Value target, ArrayRef<OpFoldResult> mixedTileSizes, ArrayRef<int64_t> interchange = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, Value target, ArrayRef<int64_t> staticTileSizes, ArrayRef<int64_t> interchange = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, Value target, ArrayRef<OpFoldResult> mixedTileSizes, ArrayRef<int64_t> interchange = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type tiled_linalg_op, ::mlir::TypeRange loops, ::mlir::Value target, ::mlir::ValueRange dynamic_sizes, /*optional*/::mlir::DenseI64ArrayAttr static_sizes, /*optional*/::mlir::DenseI64ArrayAttr interchange);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::ValueRange dynamic_sizes, /*optional*/::mlir::DenseI64ArrayAttr static_sizes, /*optional*/::mlir::DenseI64ArrayAttr interchange);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type tiled_linalg_op, ::mlir::TypeRange loops, ::mlir::Value target, ::mlir::ValueRange dynamic_sizes, /*optional*/::llvm::ArrayRef<int64_t> static_sizes = {}, /*optional*/::llvm::ArrayRef<int64_t> interchange = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::ValueRange dynamic_sizes, /*optional*/::llvm::ArrayRef<int64_t> static_sizes = {}, /*optional*/::llvm::ArrayRef<int64_t> interchange = {});
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::DiagnosedSilenceableFailure apply(::mlir::transform::TransformResults &transformResults, ::mlir::transform::TransformState &state);
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
private:
  ::mlir::StringAttr getAttributeNameForIndex(unsigned index) {
    return getAttributeNameForIndex((*this)->getName(), index);
  }

  static ::mlir::StringAttr getAttributeNameForIndex(::mlir::OperationName name, unsigned index) {
    assert(index < 2 && "invalid attribute index");
    assert(name.getStringRef() == getOperationName() && "invalid operation name");
    return name.getAttributeNames()[index];
  }

public:
  /// Returns the list of tile sizes, which may be static (Attribute) or
  /// dynamic (Value).
  SmallVector<OpFoldResult> getMixedSizes();
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::TileOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::TileReductionUsingForeachThreadOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class TileReductionUsingForeachThreadOpGenericAdaptorBase {
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::mlir::RegionRange odsRegions;
  ::std::optional<::mlir::OperationName> odsOpName;
public:
  TileReductionUsingForeachThreadOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
  ::mlir::DenseI64ArrayAttr getNumThreadsAttr();
  ::llvm::ArrayRef<int64_t> getNumThreads();
  ::mlir::DenseI64ArrayAttr getTileSizesAttr();
  ::llvm::ArrayRef<int64_t> getTileSizes();
  ::mlir::ArrayAttr getMappingAttr();
  ::std::optional< ::mlir::ArrayAttr > getMapping();
};
} // namespace detail
template <typename RangeT>
class TileReductionUsingForeachThreadOpGenericAdaptor : public detail::TileReductionUsingForeachThreadOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::TileReductionUsingForeachThreadOpGenericAdaptorBase;
public:
  TileReductionUsingForeachThreadOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, ::mlir::RegionRange regions = {}) : Base(attrs, regions), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getTarget() {
    return *getODSOperands(0).begin();
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class TileReductionUsingForeachThreadOpAdaptor : public TileReductionUsingForeachThreadOpGenericAdaptor<::mlir::ValueRange> {
public:
  using TileReductionUsingForeachThreadOpGenericAdaptor::TileReductionUsingForeachThreadOpGenericAdaptor;
  TileReductionUsingForeachThreadOpAdaptor(TileReductionUsingForeachThreadOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class TileReductionUsingForeachThreadOp : public ::mlir::Op<TileReductionUsingForeachThreadOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::NResults<4>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::transform::FunctionalStyleTransformOpTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::transform::TransformEachOpTrait, ::mlir::transform::TransformOpInterface::Trait, ::mlir::OpAsmOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = TileReductionUsingForeachThreadOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = TileReductionUsingForeachThreadOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("mapping"), ::llvm::StringRef("num_threads"), ::llvm::StringRef("tile_sizes")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getMappingAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getMappingAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getNumThreadsAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getNumThreadsAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  ::mlir::StringAttr getTileSizesAttrName() {
    return getAttributeNameForIndex(2);
  }

  static ::mlir::StringAttr getTileSizesAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 2);
  }

  void getAsmResultNames(::mlir::OpAsmSetValueNameFn setNameFn);
  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.structured.tile_reduction_using_foreach_thread");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::pdl::OperationType> getTarget();
  ::mlir::MutableOperandRange getTargetMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::pdl::OperationType> getForeachThreadOp();
  ::mlir::TypedValue<::mlir::pdl::OperationType> getFillOp();
  ::mlir::TypedValue<::mlir::pdl::OperationType> getSplitLinalgOp();
  ::mlir::TypedValue<::mlir::pdl::OperationType> getCombiningLinalgOp();
  ::mlir::DenseI64ArrayAttr getNumThreadsAttr();
  ::llvm::ArrayRef<int64_t> getNumThreads();
  ::mlir::DenseI64ArrayAttr getTileSizesAttr();
  ::llvm::ArrayRef<int64_t> getTileSizes();
  ::mlir::ArrayAttr getMappingAttr();
  ::std::optional< ::mlir::ArrayAttr > getMapping();
  void setNumThreadsAttr(::mlir::DenseI64ArrayAttr attr);
  void setNumThreads(::llvm::ArrayRef<int64_t> attrValue);
  void setTileSizesAttr(::mlir::DenseI64ArrayAttr attr);
  void setTileSizes(::llvm::ArrayRef<int64_t> attrValue);
  void setMappingAttr(::mlir::ArrayAttr attr);
  ::mlir::Attribute removeMappingAttr();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, Value target, ArrayRef<int64_t> staticNumThreads, ArrayRef<int64_t> staticTileSizes, ArrayAttr mapping = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type foreach_thread_op, ::mlir::Type fill_op, ::mlir::Type split_linalg_op, ::mlir::Type combining_linalg_op, ::mlir::Value target, ::mlir::DenseI64ArrayAttr num_threads, ::mlir::DenseI64ArrayAttr tile_sizes, /*optional*/::mlir::ArrayAttr mapping);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::DenseI64ArrayAttr num_threads, ::mlir::DenseI64ArrayAttr tile_sizes, /*optional*/::mlir::ArrayAttr mapping);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type foreach_thread_op, ::mlir::Type fill_op, ::mlir::Type split_linalg_op, ::mlir::Type combining_linalg_op, ::mlir::Value target, ::llvm::ArrayRef<int64_t> num_threads, ::llvm::ArrayRef<int64_t> tile_sizes, /*optional*/::mlir::ArrayAttr mapping);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::llvm::ArrayRef<int64_t> num_threads, ::llvm::ArrayRef<int64_t> tile_sizes, /*optional*/::mlir::ArrayAttr mapping);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void populateDefaultAttrs(const ::mlir::OperationName &opName, ::mlir::NamedAttrList &attributes);
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
private:
  ::mlir::StringAttr getAttributeNameForIndex(unsigned index) {
    return getAttributeNameForIndex((*this)->getName(), index);
  }

  static ::mlir::StringAttr getAttributeNameForIndex(::mlir::OperationName name, unsigned index) {
    assert(index < 3 && "invalid attribute index");
    assert(name.getStringRef() == getOperationName() && "invalid operation name");
    return name.getAttributeNames()[index];
  }

public:
  ::mlir::DiagnosedSilenceableFailure applyToOne(
      ::mlir::linalg::LinalgOp target,
      ::mlir::transform::ApplyToEachResultList &results,
      ::mlir::transform::TransformState &state);
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::TileReductionUsingForeachThreadOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::TileReductionUsingScfOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class TileReductionUsingScfOpGenericAdaptorBase {
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::mlir::RegionRange odsRegions;
  ::std::optional<::mlir::OperationName> odsOpName;
public:
  TileReductionUsingScfOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
  ::mlir::DenseI64ArrayAttr getTileSizesAttr();
  ::llvm::ArrayRef<int64_t> getTileSizes();
};
} // namespace detail
template <typename RangeT>
class TileReductionUsingScfOpGenericAdaptor : public detail::TileReductionUsingScfOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::TileReductionUsingScfOpGenericAdaptorBase;
public:
  TileReductionUsingScfOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, ::mlir::RegionRange regions = {}) : Base(attrs, regions), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getTarget() {
    return *getODSOperands(0).begin();
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class TileReductionUsingScfOpAdaptor : public TileReductionUsingScfOpGenericAdaptor<::mlir::ValueRange> {
public:
  using TileReductionUsingScfOpGenericAdaptor::TileReductionUsingScfOpGenericAdaptor;
  TileReductionUsingScfOpAdaptor(TileReductionUsingScfOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class TileReductionUsingScfOp : public ::mlir::Op<TileReductionUsingScfOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::NResults<4>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::transform::FunctionalStyleTransformOpTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::transform::TransformEachOpTrait, ::mlir::transform::TransformOpInterface::Trait, ::mlir::OpAsmOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = TileReductionUsingScfOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = TileReductionUsingScfOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("tile_sizes")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getTileSizesAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getTileSizesAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  void getAsmResultNames(::mlir::OpAsmSetValueNameFn setNameFn);
  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.structured.tile_reduction_using_scf");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::pdl::OperationType> getTarget();
  ::mlir::MutableOperandRange getTargetMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::pdl::OperationType> getForOp();
  ::mlir::TypedValue<::mlir::pdl::OperationType> getFillOp();
  ::mlir::TypedValue<::mlir::pdl::OperationType> getSplitLinalgOp();
  ::mlir::TypedValue<::mlir::pdl::OperationType> getCombiningLinalgOp();
  ::mlir::DenseI64ArrayAttr getTileSizesAttr();
  ::llvm::ArrayRef<int64_t> getTileSizes();
  void setTileSizesAttr(::mlir::DenseI64ArrayAttr attr);
  void setTileSizes(::llvm::ArrayRef<int64_t> attrValue);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, Value target, ArrayRef<int64_t> staticTileSizes);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type for_op, ::mlir::Type fill_op, ::mlir::Type split_linalg_op, ::mlir::Type combining_linalg_op, ::mlir::Value target, ::mlir::DenseI64ArrayAttr tile_sizes);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::DenseI64ArrayAttr tile_sizes);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type for_op, ::mlir::Type fill_op, ::mlir::Type split_linalg_op, ::mlir::Type combining_linalg_op, ::mlir::Value target, ::llvm::ArrayRef<int64_t> tile_sizes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::llvm::ArrayRef<int64_t> tile_sizes = {});
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void populateDefaultAttrs(const ::mlir::OperationName &opName, ::mlir::NamedAttrList &attributes);
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
private:
  ::mlir::StringAttr getAttributeNameForIndex(unsigned index) {
    return getAttributeNameForIndex((*this)->getName(), index);
  }

  static ::mlir::StringAttr getAttributeNameForIndex(::mlir::OperationName name, unsigned index) {
    assert(index < 1 && "invalid attribute index");
    assert(name.getStringRef() == getOperationName() && "invalid operation name");
    return name.getAttributeNames()[index];
  }

public:
  ::mlir::DiagnosedSilenceableFailure applyToOne(
      ::mlir::linalg::LinalgOp target,
      ::mlir::transform::ApplyToEachResultList &results,
      ::mlir::transform::TransformState &state);
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::TileReductionUsingScfOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::TileToForeachThreadOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class TileToForeachThreadOpGenericAdaptorBase {
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::mlir::RegionRange odsRegions;
  ::std::optional<::mlir::OperationName> odsOpName;
public:
  TileToForeachThreadOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
  ::mlir::DenseI64ArrayAttr getStaticNumThreadsAttr();
  ::llvm::ArrayRef<int64_t> getStaticNumThreads();
  ::mlir::DenseI64ArrayAttr getStaticTileSizesAttr();
  ::llvm::ArrayRef<int64_t> getStaticTileSizes();
  ::mlir::ArrayAttr getMappingAttr();
  ::std::optional< ::mlir::ArrayAttr > getMapping();
};
} // namespace detail
template <typename RangeT>
class TileToForeachThreadOpGenericAdaptor : public detail::TileToForeachThreadOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::TileToForeachThreadOpGenericAdaptorBase;
public:
  TileToForeachThreadOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions = {}) : Base(attrs, regions), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getTarget() {
    return *getODSOperands(0).begin();
  }

  RangeT getNumThreads() {
    return getODSOperands(1);
  }

  RangeT getTileSizes() {
    return getODSOperands(2);
  }

  ValueT getPackedNumThreads() {
    auto operands = getODSOperands(3);
    return operands.empty() ? ValueT{} : *operands.begin();
  }

  ValueT getPackedTileSizes() {
    auto operands = getODSOperands(4);
    return operands.empty() ? ValueT{} : *operands.begin();
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class TileToForeachThreadOpAdaptor : public TileToForeachThreadOpGenericAdaptor<::mlir::ValueRange> {
public:
  using TileToForeachThreadOpGenericAdaptor::TileToForeachThreadOpGenericAdaptor;
  TileToForeachThreadOpAdaptor(TileToForeachThreadOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class TileToForeachThreadOp : public ::mlir::Op<TileToForeachThreadOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::NResults<2>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::AtLeastNOperands<1>::Impl, ::mlir::OpTrait::AttrSizedOperandSegments, ::mlir::OpTrait::OpInvariants, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::transform::TransformOpInterface::Trait, ::mlir::OpAsmOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = TileToForeachThreadOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = TileToForeachThreadOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("mapping"), ::llvm::StringRef("operand_segment_sizes"), ::llvm::StringRef("static_num_threads"), ::llvm::StringRef("static_tile_sizes")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getMappingAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getMappingAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getOperandSegmentSizesAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getOperandSegmentSizesAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  ::mlir::StringAttr getStaticNumThreadsAttrName() {
    return getAttributeNameForIndex(2);
  }

  static ::mlir::StringAttr getStaticNumThreadsAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 2);
  }

  ::mlir::StringAttr getStaticTileSizesAttrName() {
    return getAttributeNameForIndex(3);
  }

  static ::mlir::StringAttr getStaticTileSizesAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 3);
  }

  void getAsmResultNames(::mlir::OpAsmSetValueNameFn setNameFn);
  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.structured.tile_to_foreach_thread_op");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::pdl::OperationType> getTarget();
  ::mlir::Operation::operand_range getNumThreads();
  ::mlir::Operation::operand_range getTileSizes();
  ::mlir::Value getPackedNumThreads();
  ::mlir::Value getPackedTileSizes();
  ::mlir::MutableOperandRange getTargetMutable();
  ::mlir::MutableOperandRange getNumThreadsMutable();
  ::mlir::MutableOperandRange getTileSizesMutable();
  ::mlir::MutableOperandRange getPackedNumThreadsMutable();
  ::mlir::MutableOperandRange getPackedTileSizesMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::pdl::OperationType> getForeachThreadOp();
  ::mlir::TypedValue<::mlir::pdl::OperationType> getTiledOp();
  ::mlir::DenseI64ArrayAttr getStaticNumThreadsAttr();
  ::llvm::ArrayRef<int64_t> getStaticNumThreads();
  ::mlir::DenseI64ArrayAttr getStaticTileSizesAttr();
  ::llvm::ArrayRef<int64_t> getStaticTileSizes();
  ::mlir::ArrayAttr getMappingAttr();
  ::std::optional< ::mlir::ArrayAttr > getMapping();
  void setStaticNumThreadsAttr(::mlir::DenseI64ArrayAttr attr);
  void setStaticNumThreads(::std::optional<::llvm::ArrayRef<int64_t>> attrValue);
  void setStaticTileSizesAttr(::mlir::DenseI64ArrayAttr attr);
  void setStaticTileSizes(::std::optional<::llvm::ArrayRef<int64_t>> attrValue);
  void setMappingAttr(::mlir::ArrayAttr attr);
  ::mlir::Attribute removeStaticNumThreadsAttr();
  ::mlir::Attribute removeStaticTileSizesAttr();
  ::mlir::Attribute removeMappingAttr();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, Value target, ArrayRef<int64_t> staticTileSizes, ::mlir::transform::TileSizesSpec odsArg2 = ::mlir::transform::TileSizesSpec(), ArrayAttr mapping = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, Value target, ArrayRef<OpFoldResult> mixedTileSizes, ::mlir::transform::TileSizesSpec odsArg2 = ::mlir::transform::TileSizesSpec(), ArrayAttr mapping = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, Value target, ArrayRef<int64_t> staticNumThreads, ::mlir::transform::NumThreadsSpec odsArg2 = ::mlir::transform::NumThreadsSpec(), ArrayAttr mapping = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, Value target, ArrayRef<OpFoldResult> mixedNumThreads, ::mlir::transform::NumThreadsSpec odsArg2 = ::mlir::transform::NumThreadsSpec(), ArrayAttr mapping = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type foreach_thread_op, ::mlir::Type tiled_op, ::mlir::Value target, ::mlir::ValueRange num_threads, ::mlir::ValueRange tile_sizes, /*optional*/::mlir::Value packed_num_threads, /*optional*/::mlir::Value packed_tile_sizes, /*optional*/::mlir::DenseI64ArrayAttr static_num_threads, /*optional*/::mlir::DenseI64ArrayAttr static_tile_sizes, /*optional*/::mlir::ArrayAttr mapping);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::ValueRange num_threads, ::mlir::ValueRange tile_sizes, /*optional*/::mlir::Value packed_num_threads, /*optional*/::mlir::Value packed_tile_sizes, /*optional*/::mlir::DenseI64ArrayAttr static_num_threads, /*optional*/::mlir::DenseI64ArrayAttr static_tile_sizes, /*optional*/::mlir::ArrayAttr mapping);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type foreach_thread_op, ::mlir::Type tiled_op, ::mlir::Value target, ::mlir::ValueRange num_threads, ::mlir::ValueRange tile_sizes, /*optional*/::mlir::Value packed_num_threads, /*optional*/::mlir::Value packed_tile_sizes, /*optional*/::llvm::ArrayRef<int64_t> static_num_threads, /*optional*/::llvm::ArrayRef<int64_t> static_tile_sizes, /*optional*/::mlir::ArrayAttr mapping);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::ValueRange num_threads, ::mlir::ValueRange tile_sizes, /*optional*/::mlir::Value packed_num_threads, /*optional*/::mlir::Value packed_tile_sizes, /*optional*/::llvm::ArrayRef<int64_t> static_num_threads, /*optional*/::llvm::ArrayRef<int64_t> static_tile_sizes, /*optional*/::mlir::ArrayAttr mapping);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::LogicalResult verify();
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
private:
  ::mlir::StringAttr getAttributeNameForIndex(unsigned index) {
    return getAttributeNameForIndex((*this)->getName(), index);
  }

  static ::mlir::StringAttr getAttributeNameForIndex(::mlir::OperationName name, unsigned index) {
    assert(index < 4 && "invalid attribute index");
    assert(name.getStringRef() == getOperationName() && "invalid operation name");
    return name.getAttributeNames()[index];
  }

public:
  ::mlir::DiagnosedSilenceableFailure apply(
      ::mlir::transform::TransformResults &transformResults,
      ::mlir::transform::TransformState &state);

  ::llvm::SmallVector<::mlir::OpFoldResult> getMixedNumThreads();
  ::llvm::SmallVector<::mlir::OpFoldResult> getMixedTileSizes();
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::TileToForeachThreadOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::TileToScfForOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class TileToScfForOpGenericAdaptorBase {
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::mlir::RegionRange odsRegions;
  ::std::optional<::mlir::OperationName> odsOpName;
public:
  TileToScfForOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
  ::mlir::DenseI64ArrayAttr getStaticSizesAttr();
  ::llvm::ArrayRef<int64_t> getStaticSizes();
  ::mlir::DenseI64ArrayAttr getInterchangeAttr();
  ::llvm::ArrayRef<int64_t> getInterchange();
};
} // namespace detail
template <typename RangeT>
class TileToScfForOpGenericAdaptor : public detail::TileToScfForOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::TileToScfForOpGenericAdaptorBase;
public:
  TileToScfForOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, ::mlir::RegionRange regions = {}) : Base(attrs, regions), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getTarget() {
    return *getODSOperands(0).begin();
  }

  RangeT getDynamicSizes() {
    return getODSOperands(1);
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class TileToScfForOpAdaptor : public TileToScfForOpGenericAdaptor<::mlir::ValueRange> {
public:
  using TileToScfForOpGenericAdaptor::TileToScfForOpGenericAdaptor;
  TileToScfForOpAdaptor(TileToScfForOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class TileToScfForOp : public ::mlir::Op<TileToScfForOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::AtLeastNResults<1>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::AtLeastNOperands<1>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::transform::TransformOpInterface::Trait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::OpAsmOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = TileToScfForOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = TileToScfForOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("interchange"), ::llvm::StringRef("static_sizes")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getInterchangeAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getInterchangeAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getStaticSizesAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getStaticSizesAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  void getAsmResultNames(::mlir::OpAsmSetValueNameFn setNameFn);
  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.structured.tile_to_scf_for");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::pdl::OperationType> getTarget();
  ::mlir::Operation::operand_range getDynamicSizes();
  ::mlir::MutableOperandRange getTargetMutable();
  ::mlir::MutableOperandRange getDynamicSizesMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::pdl::OperationType> getTiledLinalgOp();
  ::mlir::Operation::result_range getLoops();
  ::mlir::DenseI64ArrayAttr getStaticSizesAttr();
  ::llvm::ArrayRef<int64_t> getStaticSizes();
  ::mlir::DenseI64ArrayAttr getInterchangeAttr();
  ::llvm::ArrayRef<int64_t> getInterchange();
  void setStaticSizesAttr(::mlir::DenseI64ArrayAttr attr);
  void setStaticSizes(::std::optional<::llvm::ArrayRef<int64_t>> attrValue);
  void setInterchangeAttr(::mlir::DenseI64ArrayAttr attr);
  void setInterchange(::std::optional<::llvm::ArrayRef<int64_t>> attrValue);
  ::mlir::Attribute removeStaticSizesAttr();
  ::mlir::Attribute removeInterchangeAttr();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type tiled_linalg_op, ::mlir::TypeRange loops, ::mlir::Value target, ::mlir::ValueRange dynamic_sizes, /*optional*/::mlir::DenseI64ArrayAttr static_sizes, /*optional*/::mlir::DenseI64ArrayAttr interchange);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::ValueRange dynamic_sizes, /*optional*/::mlir::DenseI64ArrayAttr static_sizes, /*optional*/::mlir::DenseI64ArrayAttr interchange);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type tiled_linalg_op, ::mlir::TypeRange loops, ::mlir::Value target, ::mlir::ValueRange dynamic_sizes, /*optional*/::llvm::ArrayRef<int64_t> static_sizes = {}, /*optional*/::llvm::ArrayRef<int64_t> interchange = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::ValueRange dynamic_sizes, /*optional*/::llvm::ArrayRef<int64_t> static_sizes = {}, /*optional*/::llvm::ArrayRef<int64_t> interchange = {});
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::DiagnosedSilenceableFailure apply(::mlir::transform::TransformResults &transformResults, ::mlir::transform::TransformState &state);
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
private:
  ::mlir::StringAttr getAttributeNameForIndex(unsigned index) {
    return getAttributeNameForIndex((*this)->getName(), index);
  }

  static ::mlir::StringAttr getAttributeNameForIndex(::mlir::OperationName name, unsigned index) {
    assert(index < 2 && "invalid attribute index");
    assert(name.getStringRef() == getOperationName() && "invalid operation name");
    return name.getAttributeNames()[index];
  }

public:
  /// Returns the list of tile sizes, which may be static (Attribute) or
  /// dynamic (Value).
  SmallVector<OpFoldResult> getMixedSizes();
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::TileToScfForOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::VectorizeOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class VectorizeOpGenericAdaptorBase {
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::mlir::RegionRange odsRegions;
  ::std::optional<::mlir::OperationName> odsOpName;
public:
  VectorizeOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
  ::mlir::UnitAttr getVectorizePaddingAttr();
  bool getVectorizePadding();
  ::mlir::UnitAttr getVectorizeNdExtractAttr();
  bool getVectorizeNdExtract();
  ::mlir::UnitAttr getDisableMultiReductionToContractPatternsAttr();
  bool getDisableMultiReductionToContractPatterns();
  ::mlir::UnitAttr getDisableTransferPermutationMapLoweringPatternsAttr();
  bool getDisableTransferPermutationMapLoweringPatterns();
};
} // namespace detail
template <typename RangeT>
class VectorizeOpGenericAdaptor : public detail::VectorizeOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::VectorizeOpGenericAdaptorBase;
public:
  VectorizeOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, ::mlir::RegionRange regions = {}) : Base(attrs, regions), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getTarget() {
    return *getODSOperands(0).begin();
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class VectorizeOpAdaptor : public VectorizeOpGenericAdaptor<::mlir::ValueRange> {
public:
  using VectorizeOpGenericAdaptor::VectorizeOpGenericAdaptor;
  VectorizeOpAdaptor(VectorizeOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class VectorizeOp : public ::mlir::Op<VectorizeOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::pdl::OperationType>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::transform::FunctionalStyleTransformOpTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::transform::TransformEachOpTrait, ::mlir::transform::TransformOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = VectorizeOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = VectorizeOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("disable_multi_reduction_to_contract_patterns"), ::llvm::StringRef("disable_transfer_permutation_map_lowering_patterns"), ::llvm::StringRef("vectorize_nd_extract"), ::llvm::StringRef("vectorize_padding")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getDisableMultiReductionToContractPatternsAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getDisableMultiReductionToContractPatternsAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getDisableTransferPermutationMapLoweringPatternsAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getDisableTransferPermutationMapLoweringPatternsAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  ::mlir::StringAttr getVectorizeNdExtractAttrName() {
    return getAttributeNameForIndex(2);
  }

  static ::mlir::StringAttr getVectorizeNdExtractAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 2);
  }

  ::mlir::StringAttr getVectorizePaddingAttrName() {
    return getAttributeNameForIndex(3);
  }

  static ::mlir::StringAttr getVectorizePaddingAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 3);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.structured.vectorize");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::pdl::OperationType> getTarget();
  ::mlir::MutableOperandRange getTargetMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::pdl::OperationType> getTransformed();
  ::mlir::UnitAttr getVectorizePaddingAttr();
  bool getVectorizePadding();
  ::mlir::UnitAttr getVectorizeNdExtractAttr();
  bool getVectorizeNdExtract();
  ::mlir::UnitAttr getDisableMultiReductionToContractPatternsAttr();
  bool getDisableMultiReductionToContractPatterns();
  ::mlir::UnitAttr getDisableTransferPermutationMapLoweringPatternsAttr();
  bool getDisableTransferPermutationMapLoweringPatterns();
  void setVectorizePaddingAttr(::mlir::UnitAttr attr);
  void setVectorizePadding(bool attrValue);
  void setVectorizeNdExtractAttr(::mlir::UnitAttr attr);
  void setVectorizeNdExtract(bool attrValue);
  void setDisableMultiReductionToContractPatternsAttr(::mlir::UnitAttr attr);
  void setDisableMultiReductionToContractPatterns(bool attrValue);
  void setDisableTransferPermutationMapLoweringPatternsAttr(::mlir::UnitAttr attr);
  void setDisableTransferPermutationMapLoweringPatterns(bool attrValue);
  ::mlir::Attribute removeVectorizePaddingAttr();
  ::mlir::Attribute removeVectorizeNdExtractAttr();
  ::mlir::Attribute removeDisableMultiReductionToContractPatternsAttr();
  ::mlir::Attribute removeDisableTransferPermutationMapLoweringPatternsAttr();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, Value target, bool vectorizePadding = false, bool vectorizeNDExtract = false);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type transformed, ::mlir::Value target, /*optional*/::mlir::UnitAttr vectorize_padding, /*optional*/::mlir::UnitAttr vectorize_nd_extract, /*optional*/::mlir::UnitAttr disable_multi_reduction_to_contract_patterns, /*optional*/::mlir::UnitAttr disable_transfer_permutation_map_lowering_patterns);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, /*optional*/::mlir::UnitAttr vectorize_padding, /*optional*/::mlir::UnitAttr vectorize_nd_extract, /*optional*/::mlir::UnitAttr disable_multi_reduction_to_contract_patterns, /*optional*/::mlir::UnitAttr disable_transfer_permutation_map_lowering_patterns);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type transformed, ::mlir::Value target, /*optional*/bool vectorize_padding = false, /*optional*/bool vectorize_nd_extract = false, /*optional*/bool disable_multi_reduction_to_contract_patterns = false, /*optional*/bool disable_transfer_permutation_map_lowering_patterns = false);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, /*optional*/bool vectorize_padding = false, /*optional*/bool vectorize_nd_extract = false, /*optional*/bool disable_multi_reduction_to_contract_patterns = false, /*optional*/bool disable_transfer_permutation_map_lowering_patterns = false);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
private:
  ::mlir::StringAttr getAttributeNameForIndex(unsigned index) {
    return getAttributeNameForIndex((*this)->getName(), index);
  }

  static ::mlir::StringAttr getAttributeNameForIndex(::mlir::OperationName name, unsigned index) {
    assert(index < 4 && "invalid attribute index");
    assert(name.getStringRef() == getOperationName() && "invalid operation name");
    return name.getAttributeNames()[index];
  }

public:
  ::mlir::DiagnosedSilenceableFailure applyToOne(
      ::mlir::Operation *target,
      ::mlir::transform::ApplyToEachResultList &results,
      ::mlir::transform::TransformState &state);
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::VectorizeOp)


#endif  // GET_OP_CLASSES

