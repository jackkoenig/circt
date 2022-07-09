//===- AnnotationDetails.h - common annotation logic ------------*- C++ -*-===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//
//
// This file contains private APIs for dealing with annotations.
//
//===----------------------------------------------------------------------===//

#ifndef CIRCT_DIALECT_FIRRTL_ANNOTATIONDETAILS_H
#define CIRCT_DIALECT_FIRRTL_ANNOTATIONDETAILS_H

#include "circt/Support/LLVM.h"

namespace circt {
namespace firrtl {

//===----------------------------------------------------------------------===//
// Common strings related to annotations
//===----------------------------------------------------------------------===//

constexpr const char *rawAnnotations = "rawAnnotations";

//===----------------------------------------------------------------------===//
// Annotation Class Names
//===----------------------------------------------------------------------===//

constexpr const char *dontTouchAnnoClass =
    "firrtl.transforms.DontTouchAnnotation";
constexpr const char *forceNameAnnoClass =
    "chisel3.util.experimental.ForceNameAnnotation";

constexpr const char *omirAnnoClass =
    "freechips.rocketchip.objectmodel.OMIRAnnotation";
constexpr const char *omirFileAnnoClass =
    "freechips.rocketchip.objectmodel.OMIRFileAnnotation";
constexpr const char *omirTrackerAnnoClass =
    "freechips.rocketchip.objectmodel.OMIRTracker";

constexpr const char *blackBoxInlineAnnoClass =
    "firrtl.transforms.BlackBoxInlineAnno";
constexpr const char *blackBoxPathAnnoClass =
    "firrtl.transforms.BlackBoxPathAnno";
constexpr const char *blackBoxTargetDirAnnoClass =
    "firrtl.transforms.BlackBoxTargetDirAnno";
constexpr const char *blackBoxResourceFileNameAnnoClass =
    "firrtl.transforms.BlackBoxResourceFileNameAnno";
constexpr const char *extractAssertAnnoClass =
    "sifive.enterprise.firrtl.ExtractAssertionsAnnotation";
constexpr const char *extractAssumeAnnoClass =
    "sifive.enterprise.firrtl.ExtractAssumptionsAnnotation";
constexpr const char *extractCoverageAnnoClass =
    "sifive.enterprise.firrtl.ExtractCoverageAnnotation";
constexpr const char *testBenchDirAnnoClass =
    "sifive.enterprise.firrtl.TestBenchDirAnnotation";
constexpr const char *moduleHierAnnoClass =
    "sifive.enterprise.firrtl.ModuleHierarchyAnnotation";
constexpr const char *testHarnessHierAnnoClass =
    "sifive.enterprise.firrtl.TestHarnessHierarchyAnnotation";
constexpr const char *retimeModulesFileAnnoClass =
    "sifive.enterprise.firrtl.RetimeModulesAnnotation";
constexpr const char *retimeModuleAnnoClass =
    "freechips.rocketchip.util.RetimeModuleAnnotation";
static const char *verifBlackBoxAnnoClass =
    "freechips.rocketchip.annotations.InternalVerifBlackBoxAnnotation";
static const char *metadataDirectoryAttrName =
    "sifive.enterprise.firrtl.MetadataDirAnnotation";
static const char *noDedupAnnoClass = "firrtl.transforms.NoDedupAnnotation";
static const char *dftTestModeEnableAnnoClass =
    "sifive.enterprise.firrtl.DFTTestModeEnableAnnotation";

// Grand Central Annotations
constexpr const char *serializedViewAnnoClass =
    "sifive.enterprise.grandcentral.GrandCentralView$SerializedViewAnnotation";
constexpr const char *viewAnnoClass =
    "sifive.enterprise.grandcentral.ViewAnnotation";
constexpr const char *companionAnnoClass =
    "sifive.enterprise.grandcentral.ViewAnnotation.companion"; // not in SFC
constexpr const char *parentAnnoClass =
    "sifive.enterprise.grandcentral.ViewAnnotation.parent"; // not in SFC
constexpr const char *augmentedGroundTypeClass =
    "sifive.enterprise.grandcentral.AugmentedGroundType"; // not an annotation
constexpr const char *dataTapsClass =
    "sifive.enterprise.grandcentral.DataTapsAnnotation";
constexpr const char *dataTapsBlackboxClass =
    "sifive.enterprise.grandcentral.DataTapsAnnotation.blackbox"; // not in SFC
constexpr const char *memTapClass =
    "sifive.enterprise.grandcentral.MemTapAnnotation";
constexpr const char *memTapBlackboxClass =
    "sifive.enterprise.grandcentral.MemTapAnnotation.blackbox"; // not in SFC
constexpr const char *memTapPortClass =
    "sifive.enterprise.grandcentral.MemTapAnnotation.port"; // not in SFC
constexpr const char *memTapSourceClass =
    "sifive.enterprise.grandcentral.MemTapAnnotation.source"; // not in SFC
constexpr const char *deletedKeyClass =
    "sifive.enterprise.grandcentral.DeletedDataTapKey";
constexpr const char *literalKeyClass =
    "sifive.enterprise.grandcentral.LiteralDataTapKey";
constexpr const char *referenceKeyClass =
    "sifive.enterprise.grandcentral.ReferenceDataTapKey";
constexpr const char *referenceKeyPortClass =
    "sifive.enterprise.grandcentral.ReferenceDataTapKey.port"; // not in SFC
constexpr const char *referenceKeySourceClass =
    "sifive.enterprise.grandcentral.ReferenceDataTapKey.source"; // not in SFC
constexpr const char *internalKeyClass =
    "sifive.enterprise.grandcentral.DataTapModuleSignalKey";
constexpr const char *internalKeyPortClass =
    "sifive.enterprise.grandcentral.DataTapModuleSignalKey.port"; // not in SFC
constexpr const char *internalKeySourceClass =
    "sifive.enterprise.grandcentral.DataTapModuleSignalKey.source"; // not in
                                                                    // SFC
constexpr const char *extractGrandCentralClass =
    "sifive.enterprise.grandcentral.ExtractGrandCentralAnnotation";
constexpr const char *grandCentralHierarchyFileAnnoClass =
    "sifive.enterprise.grandcentral.GrandCentralHierarchyFileAnnotation";
constexpr const char *signalDriverAnnoClass =
    "sifive.enterprise.grandcentral.SignalDriverAnnotation";
constexpr const char *signalDriverTargetAnnoClass =
    "sifive.enterprise.grandcentral.SignalDriverAnnotation.target"; // not in
                                                                    // SFC
constexpr const char *signalDriverModuleAnnoClass =
    "sifive.enterprise.grandcentral.SignalDriverAnnotation.module"; // not in
                                                                    // SFC

// SiFive specific Annotations
constexpr const char *dutAnnoClass =
    "sifive.enterprise.firrtl.MarkDUTAnnotation";
constexpr const char *testbenchDirAnnoClass =
    "sifive.enterprise.firrtl.TestBenchDirAnnotation";
constexpr const char *injectDUTHierarchyAnnoClass =
    "sifive.enterprise.firrtl.InjectDUTHierarchyAnnotation";
constexpr const char *sitestBlackBoxAnnoClass =
    "sifive.enterprise.firrtl.SitestBlackBoxAnnotation";
constexpr const char *sitestTestHarnessBlackBoxAnnoClass =
    "sifive.enterprise.firrtl.SitestTestHarnessBlackBoxAnnotation";
constexpr const char *dontObfuscateModuleAnnoClass =
    "sifive.enterprise.firrtl.DontObfuscateModuleAnnotation";
constexpr const char *scalaClassAnnoClass =
    "sifive.enterprise.firrtl.ScalaClassAnnotation";
constexpr const char *elaborationArtefactsDirectoryAnnoClass =
    "sifive.enterprise.firrtl.ElaborationArtefactsDirectory";
constexpr const char *subCircuitsTargetDirectoryAnnoClass =
    "sifive.enterprise.grandcentral.phases.SubCircuitsTargetDirectory";

// MemToRegOfVec Annotations
constexpr const char *convertMemToRegOfVecAnnoClass =
    "sifive.enterprise.firrtl.ConvertMemToRegOfVecAnnotation$";
constexpr const char *excludeMemToRegAnnoClass =
    "sifive.enterprise.firrtl.ExcludeMemFromMemToRegOfVec";

// Instance Extraction
constexpr const char *extractBlackBoxAnnoClass =
    "sifive.enterprise.firrtl.ExtractBlackBoxAnnotation";
constexpr const char *extractClockGatesAnnoClass =
    "sifive.enterprise.firrtl.ExtractClockGatesFileAnnotation";
constexpr const char *extractSeqMemsAnnoClass =
    "sifive.enterprise.firrtl.ExtractSeqMemsFileAnnotation";

} // namespace firrtl
} // namespace circt

#endif // CIRCT_DIALECT_FIRRTL_ANNOTATIONDETAILS_H
