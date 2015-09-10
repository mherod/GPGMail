/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSDictionary;

@interface _MFRedundantTextIdentifierSolutionGenerator : NSObject
{
    CDStruct_f9502b4c *_replyBuffer;
    CDStruct_f9502b4c *_originalBuffer;
    long long _replyLength;
    long long _originalLength;
    NSDictionary *_replyAttachmentContextsByURL;
    NSDictionary *_originalAttachmentContextsByURL;
}

@property(readonly, copy, nonatomic) NSDictionary *originalAttachmentContextsByURL; // @synthesize originalAttachmentContextsByURL=_originalAttachmentContextsByURL;
@property(readonly, copy, nonatomic) NSDictionary *replyAttachmentContextsByURL; // @synthesize replyAttachmentContextsByURL=_replyAttachmentContextsByURL;
@property(readonly, nonatomic) long long originalLength; // @synthesize originalLength=_originalLength;
@property(readonly, nonatomic) long long replyLength; // @synthesize replyLength=_replyLength;
@property(readonly, nonatomic) CDStruct_f9502b4c *originalBuffer; // @synthesize originalBuffer=_originalBuffer;
@property(readonly, nonatomic) CDStruct_f9502b4c *replyBuffer; // @synthesize replyBuffer=_replyBuffer;
- (void).cxx_destruct;
- (id)generateBestSolutionInForwardDirection:(BOOL)arg1 replyStartIndex:(long long)arg2 originalStartIndex:(long long)arg3;
- (id)generateBestSolution;
- (id)init;
- (id)initWithReply:(CDStruct_f9502b4c *)arg1 replyLength:(long long)arg2 replyAttachmentContextsByURL:(id)arg3 original:(CDStruct_f9502b4c *)arg4 originalLength:(long long)arg5 originalAttachmentContextsByURL:(id)arg6;

@end

