/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class MCMessage, MCParsedMessage, NSString;

@interface MFRedundantContentMarkup : NSObject
{
    BOOL _matchedEntireAncestorContiguously;
    BOOL _messageContainsRedundantText;
    MCMessage *_message;
    MCParsedMessage *_parsedMessage;
    MCMessage *_ancestorUsedForComparison;
    NSString *_messageBodyWithRedundantTextMarkers;
    NSString *_redundantContentSenderName;
}

@property(readonly, nonatomic) BOOL messageContainsRedundantText; // @synthesize messageContainsRedundantText=_messageContainsRedundantText;
@property(readonly, nonatomic) BOOL matchedEntireAncestorContiguously; // @synthesize matchedEntireAncestorContiguously=_matchedEntireAncestorContiguously;
@property(readonly, copy, nonatomic) NSString *redundantContentSenderName; // @synthesize redundantContentSenderName=_redundantContentSenderName;
@property(readonly, copy, nonatomic) NSString *messageBodyWithRedundantTextMarkers; // @synthesize messageBodyWithRedundantTextMarkers=_messageBodyWithRedundantTextMarkers;
@property(readonly, nonatomic) MCMessage *ancestorUsedForComparison; // @synthesize ancestorUsedForComparison=_ancestorUsedForComparison;
@property(readonly, nonatomic) MCParsedMessage *parsedMessage; // @synthesize parsedMessage=_parsedMessage;
@property(readonly, nonatomic) MCMessage *message; // @synthesize message=_message;
- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)initWithMessage:(id)arg1 parsedMessage:(id)arg2 ancestorUsedForComparison:(id)arg3 messageBodyWithRedundantTextMarkers:(id)arg4 messageContainsRedundantText:(BOOL)arg5 matchedEntireAncestorContiguously:(BOOL)arg6;

@end

