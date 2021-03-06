/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol IDEDebugSessionController <NSObject>
+ (id)descendantItemForRepresentedObject:(id)arg1 inRootNavigableItem:(id)arg2;
@property(readonly) id <IDEDebugSession> debugSession;
- (void)openMemoryBrowser;
- (void)setSelectedNavigableItemFromUserInterface:(id)arg1;
- (void)mouseExitedSidebarLineArea;
- (void)mouseOverSidebarAtLocation:(id)arg1 withinBlockAtRange:(struct _NSRange)arg2 withScreenFrame:(struct CGRect)arg3;
- (id)initWithLaunchSession:(id)arg1 workspaceDocument:(id)arg2;
@end

