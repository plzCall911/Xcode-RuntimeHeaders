/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <DevToolsInterface/PBXDebugViewModule.h>

#import "PBXLSViewControllerProtocol-Protocol.h"

@class PBXLSModel;

@interface PBXDebugDSModelViewModule : PBXDebugViewModule <PBXLSViewControllerProtocol>
{
    PBXLSModel *_model;
    PBXDebugViewModule *_selectedSubModelViewModule;
}

- (void)updateUI;
- (void)dsModelWillDealloc:(id)arg1;
- (void)dsModelDidUpdate:(id)arg1;
- (id)selectedSubModelViewModule;
- (void)setSelectedSubModelViewModule:(id)arg1;
- (id)model;
- (void)setModel:(id)arg1;

@end

