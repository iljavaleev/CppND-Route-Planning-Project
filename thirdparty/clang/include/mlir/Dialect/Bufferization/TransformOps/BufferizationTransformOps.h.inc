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
class EmptyTensorToAllocTensorOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class OneShotBufferizeOp;
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
// ::mlir::transform::EmptyTensorToAllocTensorOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class EmptyTensorToAllocTensorOpGenericAdaptorBase {
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::mlir::RegionRange odsRegions;
  ::std::optional<::mlir::OperationName> odsOpName;
public:
  EmptyTensorToAllocTensorOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class EmptyTensorToAllocTensorOpGenericAdaptor : public detail::EmptyTensorToAllocTensorOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::EmptyTensorToAllocTensorOpGenericAdaptorBase;
public:
  EmptyTensorToAllocTensorOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, ::mlir::RegionRange regions = {}) : Base(attrs, regions), odsOperands(values) {}

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
class EmptyTensorToAllocTensorOpAdaptor : public EmptyTensorToAllocTensorOpGenericAdaptor<::mlir::ValueRange> {
public:
  using EmptyTensorToAllocTensorOpGenericAdaptor::EmptyTensorToAllocTensorOpGenericAdaptor;
  EmptyTensorToAllocTensorOpAdaptor(EmptyTensorToAllocTensorOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class EmptyTensorToAllocTensorOp : public ::mlir::Op<EmptyTensorToAllocTensorOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::transform::OperationType>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::transform::FunctionalStyleTransformOpTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::transform::TransformOpInterface::Trait, ::mlir::transform::TransformEachOpTrait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = EmptyTensorToAllocTensorOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = EmptyTensorToAllocTensorOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.bufferization.empty_tensor_to_alloc_tensor");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::transform::OperationType> getTarget();
  ::mlir::MutableOperandRange getTargetMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::transform::OperationType> getTransformed();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type transformed, ::mlir::Value target);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
  ::mlir::DiagnosedSilenceableFailure applyToOne(
      ::mlir::tensor::EmptyOp target,
      ::mlir::transform::ApplyToEachResultList &results,
      ::mlir::transform::TransformState &state);
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::EmptyTensorToAllocTensorOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::OneShotBufferizeOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class OneShotBufferizeOpGenericAdaptorBase {
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::mlir::RegionRange odsRegions;
  ::std::optional<::mlir::OperationName> odsOpName;
public:
  OneShotBufferizeOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
  ::mlir::bufferization::LayoutMapOptionAttr getFunctionBoundaryTypeConversionAttr();
  ::std::optional<::mlir::bufferization::LayoutMapOption> getFunctionBoundaryTypeConversion();
  ::mlir::BoolAttr getAllowReturnAllocsAttr();
  bool getAllowReturnAllocs();
  ::mlir::BoolAttr getAllowUnknownOpsAttr();
  bool getAllowUnknownOps();
  ::mlir::BoolAttr getBufferizeFunctionBoundariesAttr();
  bool getBufferizeFunctionBoundaries();
  ::mlir::BoolAttr getCreateDeallocsAttr();
  bool getCreateDeallocs();
  ::mlir::BoolAttr getTargetIsModuleAttr();
  bool getTargetIsModule();
  ::mlir::BoolAttr getTestAnalysisOnlyAttr();
  bool getTestAnalysisOnly();
  ::mlir::BoolAttr getPrintConflictsAttr();
  bool getPrintConflicts();
};
} // namespace detail
template <typename RangeT>
class OneShotBufferizeOpGenericAdaptor : public detail::OneShotBufferizeOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::OneShotBufferizeOpGenericAdaptorBase;
public:
  OneShotBufferizeOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, ::mlir::RegionRange regions = {}) : Base(attrs, regions), odsOperands(values) {}

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
class OneShotBufferizeOpAdaptor : public OneShotBufferizeOpGenericAdaptor<::mlir::ValueRange> {
public:
  using OneShotBufferizeOpGenericAdaptor::OneShotBufferizeOpGenericAdaptor;
  OneShotBufferizeOpAdaptor(OneShotBufferizeOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class OneShotBufferizeOp : public ::mlir::Op<OneShotBufferizeOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::transform::TransformOpInterface::Trait, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = OneShotBufferizeOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = OneShotBufferizeOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("allow_return_allocs"), ::llvm::StringRef("allow_unknown_ops"), ::llvm::StringRef("bufferize_function_boundaries"), ::llvm::StringRef("create_deallocs"), ::llvm::StringRef("function_boundary_type_conversion"), ::llvm::StringRef("print_conflicts"), ::llvm::StringRef("target_is_module"), ::llvm::StringRef("test_analysis_only")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getAllowReturnAllocsAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getAllowReturnAllocsAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getAllowUnknownOpsAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getAllowUnknownOpsAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  ::mlir::StringAttr getBufferizeFunctionBoundariesAttrName() {
    return getAttributeNameForIndex(2);
  }

  static ::mlir::StringAttr getBufferizeFunctionBoundariesAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 2);
  }

  ::mlir::StringAttr getCreateDeallocsAttrName() {
    return getAttributeNameForIndex(3);
  }

  static ::mlir::StringAttr getCreateDeallocsAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 3);
  }

  ::mlir::StringAttr getFunctionBoundaryTypeConversionAttrName() {
    return getAttributeNameForIndex(4);
  }

  static ::mlir::StringAttr getFunctionBoundaryTypeConversionAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 4);
  }

  ::mlir::StringAttr getPrintConflictsAttrName() {
    return getAttributeNameForIndex(5);
  }

  static ::mlir::StringAttr getPrintConflictsAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 5);
  }

  ::mlir::StringAttr getTargetIsModuleAttrName() {
    return getAttributeNameForIndex(6);
  }

  static ::mlir::StringAttr getTargetIsModuleAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 6);
  }

  ::mlir::StringAttr getTestAnalysisOnlyAttrName() {
    return getAttributeNameForIndex(7);
  }

  static ::mlir::StringAttr getTestAnalysisOnlyAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 7);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.bufferization.one_shot_bufferize");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::pdl::OperationType> getTarget();
  ::mlir::MutableOperandRange getTargetMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::bufferization::LayoutMapOptionAttr getFunctionBoundaryTypeConversionAttr();
  ::std::optional<::mlir::bufferization::LayoutMapOption> getFunctionBoundaryTypeConversion();
  ::mlir::BoolAttr getAllowReturnAllocsAttr();
  bool getAllowReturnAllocs();
  ::mlir::BoolAttr getAllowUnknownOpsAttr();
  bool getAllowUnknownOps();
  ::mlir::BoolAttr getBufferizeFunctionBoundariesAttr();
  bool getBufferizeFunctionBoundaries();
  ::mlir::BoolAttr getCreateDeallocsAttr();
  bool getCreateDeallocs();
  ::mlir::BoolAttr getTargetIsModuleAttr();
  bool getTargetIsModule();
  ::mlir::BoolAttr getTestAnalysisOnlyAttr();
  bool getTestAnalysisOnly();
  ::mlir::BoolAttr getPrintConflictsAttr();
  bool getPrintConflicts();
  void setFunctionBoundaryTypeConversionAttr(::mlir::bufferization::LayoutMapOptionAttr attr);
  void setFunctionBoundaryTypeConversion(::std::optional<::mlir::bufferization::LayoutMapOption> attrValue);
  void setAllowReturnAllocsAttr(::mlir::BoolAttr attr);
  void setAllowReturnAllocs(bool attrValue);
  void setAllowUnknownOpsAttr(::mlir::BoolAttr attr);
  void setAllowUnknownOps(bool attrValue);
  void setBufferizeFunctionBoundariesAttr(::mlir::BoolAttr attr);
  void setBufferizeFunctionBoundaries(bool attrValue);
  void setCreateDeallocsAttr(::mlir::BoolAttr attr);
  void setCreateDeallocs(bool attrValue);
  void setTargetIsModuleAttr(::mlir::BoolAttr attr);
  void setTargetIsModule(bool attrValue);
  void setTestAnalysisOnlyAttr(::mlir::BoolAttr attr);
  void setTestAnalysisOnly(bool attrValue);
  void setPrintConflictsAttr(::mlir::BoolAttr attr);
  void setPrintConflicts(bool attrValue);
  ::mlir::Attribute removeFunctionBoundaryTypeConversionAttr();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value target, /*optional*/::mlir::bufferization::LayoutMapOptionAttr function_boundary_type_conversion, ::mlir::BoolAttr allow_return_allocs, ::mlir::BoolAttr allow_unknown_ops, ::mlir::BoolAttr bufferize_function_boundaries, ::mlir::BoolAttr create_deallocs, ::mlir::BoolAttr target_is_module, ::mlir::BoolAttr test_analysis_only, ::mlir::BoolAttr print_conflicts);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, /*optional*/::mlir::bufferization::LayoutMapOptionAttr function_boundary_type_conversion, ::mlir::BoolAttr allow_return_allocs, ::mlir::BoolAttr allow_unknown_ops, ::mlir::BoolAttr bufferize_function_boundaries, ::mlir::BoolAttr create_deallocs, ::mlir::BoolAttr target_is_module, ::mlir::BoolAttr test_analysis_only, ::mlir::BoolAttr print_conflicts);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value target, /*optional*/::mlir::bufferization::LayoutMapOptionAttr function_boundary_type_conversion, bool allow_return_allocs = false, bool allow_unknown_ops = false, bool bufferize_function_boundaries = false, bool create_deallocs = true, bool target_is_module = true, bool test_analysis_only = false, bool print_conflicts = false);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, /*optional*/::mlir::bufferization::LayoutMapOptionAttr function_boundary_type_conversion, bool allow_return_allocs = false, bool allow_unknown_ops = false, bool bufferize_function_boundaries = false, bool create_deallocs = true, bool target_is_module = true, bool test_analysis_only = false, bool print_conflicts = false);
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
    assert(index < 8 && "invalid attribute index");
    assert(name.getStringRef() == getOperationName() && "invalid operation name");
    return name.getAttributeNames()[index];
  }

public:
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::OneShotBufferizeOp)


#endif  // GET_OP_CLASSES

