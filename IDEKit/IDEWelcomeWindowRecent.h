/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"

@class NSImage, NSString, NSURL;

@interface IDEWelcomeWindowRecent : NSObject <NSCopying>
{
    id <NSRecentDocumentInfo> _recentInfo;
    NSURL *_url;
}

+ (id)_descriptionForLastOpenedDate:(id)arg1 isLastOpenedDate:(BOOL)arg2;
+ (id)recentsForURLs:(id)arg1;
+ (id)recentsForRecentInfos:(id)arg1;
- (void).cxx_destruct;
@property(readonly) NSString *lastOpenedDate;
- (id)recentDocumentInfo;
- (long long)state;
@property(readonly) NSString *truncatedPath;
@property(readonly) NSString *name;
@property(readonly) NSImage *image;
@property(readonly) NSURL *url;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithURL:(id)arg1;
- (id)initWithRecentInfo:(id)arg1;

@end

