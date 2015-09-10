/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSAttributedString, NSDictionary, NSMutableArray, NSString, NSURL;

@interface WebComposeMessageContents : NSObject
{
    BOOL _isMailDropPlaceholderMessage;
    long long _composeMode;
    NSAttributedString *_plainText;
    NSString *_topLevelHtmlString;
    NSMutableArray *_attachmentsAndHtmlStrings;
    NSMutableArray *_urlsForAttachmentsAndHtmlStrings;
    NSDictionary *_remoteAttachments;
    NSURL *_imageArchiveURL;
}

@property(nonatomic) BOOL isMailDropPlaceholderMessage; // @synthesize isMailDropPlaceholderMessage=_isMailDropPlaceholderMessage;
@property(retain, nonatomic) NSURL *imageArchiveURL; // @synthesize imageArchiveURL=_imageArchiveURL;
@property(copy, nonatomic) NSDictionary *remoteAttachments; // @synthesize remoteAttachments=_remoteAttachments;
@property(retain, nonatomic) NSMutableArray *urlsForAttachmentsAndHtmlStrings; // @synthesize urlsForAttachmentsAndHtmlStrings=_urlsForAttachmentsAndHtmlStrings;
@property(retain, nonatomic) NSMutableArray *attachmentsAndHtmlStrings; // @synthesize attachmentsAndHtmlStrings=_attachmentsAndHtmlStrings;
@property(retain, nonatomic) NSString *topLevelHtmlString; // @synthesize topLevelHtmlString=_topLevelHtmlString;
@property(retain, nonatomic) NSAttributedString *plainText; // @synthesize plainText=_plainText;
@property(nonatomic) long long composeMode; // @synthesize composeMode=_composeMode;
- (void).cxx_destruct;
- (id)debugDescription;
- (void)addAttachmentOrHtmlString:(id)arg1 withURL:(id)arg2;

@end

