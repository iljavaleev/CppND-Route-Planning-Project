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
class LowerVectorsOp;
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
// ::mlir::transform::LowerVectorsOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class LowerVectorsOpGenericAdaptorBase {
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::mlir::RegionRange odsRegions;
  ::std::optional<::mlir::OperationName> odsOpName;
public:
  LowerVectorsOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
  ::mlir::vector::VectorContractLoweringAttr getContractionLoweringAttr();
  ::mlir::vector::VectorContractLowering getContractionLowering();
  ::mlir::vector::VectorMultiReductionLoweringAttr getMultireductionLoweringAttr();
  ::mlir::vector::VectorMultiReductionLowering getMultireductionLowering();
  ::mlir::vector::VectorTransferSplitAttr getSplitTransfersAttr();
  ::mlir::vector::VectorTransferSplit getSplitTransfers();
  ::mlir::vector::VectorTransposeLoweringAttr getTransposeLoweringAttr();
  ::mlir::vector::VectorTransposeLowering getTransposeLowering();
  ::mlir::BoolAttr getTransposeAvx2LoweringAttr();
  bool getTransposeAvx2Lowering();
  ::mlir::BoolAttr getUnrollVectorTransfersAttr();
  bool getUnrollVectorTransfers();
};
} // namespace detail
template <typename RangeT>
class LowerVectorsOpGenericAdaptor : public detail::LowerVectorsOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::LowerVectorsOpGenericAdaptorBase;
public:
  LowerVectorsOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, ::mlir::RegionRange regions = {}) : Base(attrs, regions), odsOperands(values) {}

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
class LowerVectorsOpAdaptor : public LowerVectorsOpGenericAdaptor<::mlir::ValueRange> {
public:
  using LowerVectorsOpGenericAdaptor::LowerVectorsOpGenericAdaptor;
  LowerVectorsOpAdaptor(LowerVectorsOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class LowerVectorsOp : public ::mlir::Op<LowerVectorsOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::pdl::OperationType>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::transform::TransformOpInterface::Trait, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = LowerVectorsOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = LowerVectorsOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("contraction_lowering"), ::llvm::StringRef("multireduction_lowering"), ::llvm::StringRef("split_transfers"), ::llvm::StringRef("transpose_avx2_lowering"), ::llvm::StringRef("transpose_lowering"), ::llvm::StringRef("unroll_vector_transfers")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getContractionLoweringAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getContractionLoweringAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getMultireductionLoweringAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getMultireductionLoweringAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  ::mlir::StringAttr getSplitTransfersAttrName() {
    return getAttributeNameForIndex(2);
  }

  static ::mlir::StringAttr getSplitTransfersAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 2);
  }

  ::mlir::StringAttr getTransposeAvx2LoweringAttrName() {
    return getAttributeNameForIndex(3);
  }

  static ::mlir::StringAttr getTransposeAvx2LoweringAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 3);
  }

  ::mlir::StringAttr getTransposeLoweringAttrName() {
    return getAttributeNameForIndex(4);
  }

  static ::mlir::StringAttr getTransposeLoweringAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 4);
  }

  ::mlir::StringAttr getUnrollVectorTransfersAttrName() {
    return getAttributeNameForIndex(5);
  }

  static ::mlir::StringAttr getUnrollVectorTransfersAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 5);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.vector.lower_vectors");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::pdl::OperationType> getTarget();
  ::mlir::MutableOperandRange getTargetMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::pdl::OperationType> getResults();
  ::mlir::vector::VectorContractLoweringAttr getContractionLoweringAttr();
  ::mlir::vector::VectorContractLowering getContractionLowering();
  ::mlir::vector::VectorMultiReductionLoweringAttr getMultireductionLoweringAttr();
  ::mlir::vector::VectorMultiReductionLowering getMultireductionLowering();
  ::mlir::vector::VectorTransferSplitAttr getSplitTransfersAttr();
  ::mlir::vector::VectorTransferSplit getSplitTransfers();
  ::mlir::vector::VectorTransposeLoweringAttr getTransposeLoweringAttr();
  ::mlir::vector::VectorTransposeLowering getTransposeLowering();
  ::mlir::BoolAttr getTransposeAvx2LoweringAttr();
  bool getTransposeAvx2Lowering();
  ::mlir::BoolAttr getUnrollVectorTransfersAttr();
  bool getUnrollVectorTransfers();
  void setContractionLoweringAttr(::mlir::vector::VectorContractLoweringAttr attr);
  void setContractionLowering(::mlir::vector::VectorContractLowering attrValue);
  void setMultireductionLoweringAttr(::mlir::vector::VectorMultiReductionLoweringAttr attr);
  void setMultireductionLowering(::mlir::vector::VectorMultiReductionLowering attrValue);
  void setSplitTransfersAttr(::mlir::vector::VectorTransferSplitAttr attr);
  void setSplitTransfers(::mlir::vector::VectorTransferSplit attrValue);
  void setTransposeLoweringAttr(::mlir::vector::VectorTransposeLoweringAttr attr);
  void setTransposeLowering(::mlir::vector::VectorTransposeLowering attrValue);
  void setTransposeAvx2LoweringAttr(::mlir::BoolAttr attr);
  void setTransposeAvx2Lowering(bool attrValue);
  void setUnrollVectorTransfersAttr(::mlir::BoolAttr attr);
  void setUnrollVectorTransfers(bool attrValue);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, Type resultType, Value target, const vector::LowerVectorsOptions &options);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type results, ::mlir::Value target, ::mlir::vector::VectorContractLoweringAttr contraction_lowering, ::mlir::vector::VectorMultiReductionLoweringAttr multireduction_lowering, ::mlir::vector::VectorTransferSplitAttr split_transfers, ::mlir::vector::VectorTransposeLoweringAttr transpose_lowering, ::mlir::BoolAttr transpose_avx2_lowering, ::mlir::BoolAttr unroll_vector_transfers);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::vector::VectorContractLoweringAttr contraction_lowering, ::mlir::vector::VectorMultiReductionLoweringAttr multireduction_lowering, ::mlir::vector::VectorTransferSplitAttr split_transfers, ::mlir::vector::VectorTransposeLoweringAttr transpose_lowering, ::mlir::BoolAttr transpose_avx2_lowering, ::mlir::BoolAttr unroll_vector_transfers);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type results, ::mlir::Value target, ::mlir::vector::VectorContractLowering contraction_lowering = vector::VectorContractLowering::OuterProduct, ::mlir::vector::VectorMultiReductionLowering multireduction_lowering = vector::VectorMultiReductionLowering::InnerParallel, ::mlir::vector::VectorTransferSplit split_transfers = vector::VectorTransferSplit::LinalgCopy, ::mlir::vector::VectorTransposeLowering transpose_lowering = vector::VectorTransposeLowering::EltWise, bool transpose_avx2_lowering = false, bool unroll_vector_transfers = true);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::vector::VectorContractLowering contraction_lowering = vector::VectorContractLowering::OuterProduct, ::mlir::vector::VectorMultiReductionLowering multireduction_lowering = vector::VectorMultiReductionLowering::InnerParallel, ::mlir::vector::VectorTransferSplit split_transfers = vector::VectorTransferSplit::LinalgCopy, ::mlir::vector::VectorTransposeLowering transpose_lowering = vector::VectorTransposeLowering::EltWise, bool transpose_avx2_lowering = false, bool unroll_vector_transfers = true);
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
    assert(index < 6 && "invalid attribute index");
    assert(name.getStringRef() == getOperationName() && "invalid operation name");
    return name.getAttributeNames()[index];
  }

public:
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::LowerVectorsOp)


#endif  // GET_OP_CLASSES

