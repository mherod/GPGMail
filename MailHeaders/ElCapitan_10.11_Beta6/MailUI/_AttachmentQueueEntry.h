/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class MCAttachment, MCMimeBody, MFAttachmentViewController, NSString, NSURL, NSWindow;

@interface _AttachmentQueueEntry : NSObject
{
    MFAttachmentViewController *_attachmentController;
    MCAttachment *_attachment;
    NSWindow *_window;
    MCMimeBody *_body;
    unsigned long long _reason;
    NSString *_attachDir;
    NSURL *_applicationURL;
    NSString *_savePath;
}

+ (id)newWithWindow:(id)arg1 attachment:(id)arg2 reason:(unsigned long long)arg3 opSpecific:(id)arg4 attachmentDirectory:(id)arg5;
+ (id)newWithWindow:(id)arg1 attachmentController:(id)arg2 reason:(unsigned long long)arg3 opSpecific:(id)arg4 attachmentDirectory:(id)arg5;
@property(copy, nonatomic) NSString *savePath; // @synthesize savePath=_savePath;
@property(retain, nonatomic) NSURL *applicationURL; // @synthesize applicationURL=_applicationURL;
@property(retain, nonatomic) NSString *attachDir; // @synthesize attachDir=_attachDir;
@property(nonatomic) unsigned long long reason; // @synthesize reason=_reason;
@property(retain, nonatomic) MCMimeBody *body; // @synthesize body=_body;
@property(retain, nonatomic) NSWindow *window; // @synthesize window=_window;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
@property(retain, nonatomic) MFAttachmentViewController *attachmentController;
@property(retain, nonatomic) MCAttachment *attachment;

@end

