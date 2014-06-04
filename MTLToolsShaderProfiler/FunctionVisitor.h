/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "DYInOrderInstructionFilesVisitor.h"

@class DYCaptureArchive, DYCaptureFile;

// Not exported
@interface FunctionVisitor : DYInOrderInstructionFilesVisitor
{
    BOOL _processingCaptureFile;
    id _block;
    unsigned int _archiveFunctionIndex;
    unsigned int _fileFunctionIndex;
    DYCaptureArchive *_archive;
    DYCaptureFile *_file;
    const struct Function *_function;
    StateMirrorManager_e0060c49 _stateMirrorManager;
}

@property(readonly, nonatomic) unsigned int fileFunctionIndex; // @synthesize fileFunctionIndex=_fileFunctionIndex;
@property(readonly, nonatomic) unsigned int archiveFunctionIndex; // @synthesize archiveFunctionIndex=_archiveFunctionIndex;
@property(readonly, nonatomic) const struct Function *function; // @synthesize function=_function;
@property(readonly, nonatomic) DYCaptureFile *file; // @synthesize file=_file;
@property(readonly, nonatomic) DYCaptureArchive *archive; // @synthesize archive=_archive;
@property(readonly, nonatomic) StateMirrorManager_e0060c49 *stateMirrorManager; // @synthesize stateMirrorManager=_stateMirrorManager;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)visitFunctionStreamFile:(id)arg1;
- (void)visitCaptureArchive:(id)arg1;
- (void)setFunctionProcessor:(id)arg1;

@end
