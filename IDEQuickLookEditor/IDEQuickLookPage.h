/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class DVTDocumentLocation, DVTFileDataType, NSImage, NSString, NSURL;

@interface IDEQuickLookPage : NSObject
{
    NSURL *_documentURL;
    unsigned long long _pageNumber;
}

@property(readonly) unsigned long long pageNumber; // @synthesize pageNumber=_pageNumber;
@property(readonly) NSURL *documentURL; // @synthesize documentURL=_documentURL;
- (void).cxx_destruct;
@property(readonly) DVTDocumentLocation *navigableItem_contentDocumentLocation;
@property(readonly) NSString *navigableItem_name;
@property(readonly) NSImage *navigableItem_image;
@property(readonly) DVTFileDataType *navigableItem_documentType;
- (id)ideModelObjectTypeIdentifier;
- (id)description;
- (id)initWithDocumentURL:(id)arg1 pageNumber:(unsigned long long)arg2;

@end

