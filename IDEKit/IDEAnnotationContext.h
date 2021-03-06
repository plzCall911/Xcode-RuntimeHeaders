/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "DVTAnnotationContext.h"

@class IDEEditor, IDEWorkspace, IDEWorkspaceTabController, NSDocument;

@interface IDEAnnotationContext : DVTAnnotationContext
{
    IDEEditor *_editor;
    NSDocument *_document;
    IDEWorkspaceTabController *_workspaceTabController;
}

@property(retain) IDEWorkspaceTabController *workspaceTabController; // @synthesize workspaceTabController=_workspaceTabController;
@property(retain) NSDocument *document; // @synthesize document=_document;
@property(retain) IDEEditor *editor; // @synthesize editor=_editor;
- (void).cxx_destruct;
- (id)description;
@property(readonly) IDEWorkspace *workspace;
- (id)initWithEditor:(id)arg1 document:(id)arg2 fileDataType:(id)arg3 workspaceTabController:(id)arg4;
- (id)initWithFileDataType:(id)arg1;

@end

