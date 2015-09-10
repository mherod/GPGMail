/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <Mail/MFMailAccount.h>

#import "MFPOPAccount.h"

@class MCActivityMonitor, MCAuthScheme, MFPOPStore, NSArray, NSLock, NSString;

@interface MFPOPAccount : MFMailAccount <MFPOPAccount>
{
    NSLock *_connectionActivityLock;
    id _seenMessagesManagerLock;
    BOOL _fetcherNeedsReset;
    BOOL _deletingMessages;
    BOOL _hasDoneBackgroundSynchronization;
    MFPOPStore *_fetcher;
    MCActivityMonitor *_fetchMonitor;
}

+ (id)standardSSLPorts;
+ (id)standardPorts;
+ (id)accountTypeString;
@property(nonatomic) BOOL hasDoneBackgroundSynchronization; // @synthesize hasDoneBackgroundSynchronization=_hasDoneBackgroundSynchronization;
@property(nonatomic) BOOL deletingMessages; // @synthesize deletingMessages=_deletingMessages;
@property(nonatomic) BOOL fetcherNeedsReset; // @synthesize fetcherNeedsReset=_fetcherNeedsReset;
@property(retain, nonatomic) MCActivityMonitor *fetchMonitor; // @synthesize fetchMonitor=_fetchMonitor;
@property(retain, nonatomic) MFPOPStore *fetcher; // @synthesize fetcher=_fetcher;
- (void).cxx_destruct;
- (id)storeForMailbox:(id)arg1 createIfNeeded:(BOOL)arg2;
- (id)URLPersistenceScheme;
- (void)_addAccountAndSeenMessagesToMessageManager;
- (id)newSeenMessagesManager;
- (BOOL)canAuthenticateWithScheme:(id)arg1;
- (id)archiveMailboxCreateIfNeeded:(BOOL)arg1;
- (void)relinquishConnectionActivityLock;
- (void)acquireConnectionActivityLock;
- (void)insertInMailboxes:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)deleteSeenMessagesNow;
- (void)deleteMessagesNow:(id)arg1;
@property long long delayedMessageDeletionInterval;
@property long long messageDeletionPolicy;
@property long long bigMessageWarningSize;
- (BOOL)_setPath:(id)arg1;
- (BOOL)canMailboxBeRenamed:(id)arg1;
- (BOOL)canCreateNewMailboxes;
- (BOOL)containsMailboxes;
- (id)primaryMailbox;
- (id)mailboxPathExtension;
- (Class)storeClassForMailbox:(id)arg1;
@property(readonly, nonatomic) BOOL requiresAuthentication;
- (void *)keychainProtocol;
@property(readonly, copy, nonatomic) NSString *saslProfileName;
- (long long)defaultSecurePortNumber;
- (long long)defaultPortNumber;
- (void)_readCustomInfoFromMailboxCache:(id)arg1;
- (void)setIsOffline:(BOOL)arg1;
- (BOOL)canGoOffline;
- (void)releaseAllConnections;
@property BOOL isFirstTimeSync;
- (void)resetFetcher;
- (void)fetchSynchronously;
- (BOOL)_configureFetcherObject;
- (BOOL)connectAndAuthenticate:(id)arg1;
- (id)authenticatedConnection;
- (id)newConnectedConnectionDiscoveringBestSettings:(BOOL)arg1 withConnectTimeout:(double)arg2 readWriteTimeout:(double)arg3;
- (id)init;
- (id)initWithSystemAccount:(id)arg1;
- (id)valueInMailboxesWithName:(id)arg1;
- (id)objectSpecifierForMailbox:(id)arg1;
- (id)mailboxes;
- (void)setDeleteMessagesOnServer:(BOOL)arg1;
- (BOOL)deleteMessagesOnServer;
- (void)setDeleteMessagesWhenMovedFromInbox:(BOOL)arg1;
- (BOOL)deleteMessagesWhenMovedFromInbox;

// Remaining properties
@property(readonly, copy) NSString *accountTypeString;
@property BOOL allowInsecureAuthentication;
@property(readonly, copy) NSString *appleAuthenticationToken;
@property(readonly, copy) NSString *applePersonID;
@property(copy) NSString *authenticationScheme;
@property(copy) NSString *canonicalEmailAddress;
@property BOOL configureDynamically;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(copy) NSString *displayName;
@property(copy) NSString *externalHostname;
@property(readonly) unsigned long long hash;
@property(copy) NSString *hostname;
@property(readonly, copy) NSString *identifier;
@property(readonly, copy) NSString *oauthToken;
@property(copy) NSString *password;
@property long long portNumber;
@property(retain) MCAuthScheme *preferredAuthScheme;
@property long long securityLayerType;
@property BOOL shouldUseAuthentication;
@property(readonly, copy, nonatomic) NSArray *standardPorts;
@property(readonly, copy, nonatomic) NSArray *standardSSLPorts;
@property(readonly) Class superclass;
@property(copy) NSString *username;
@property BOOL usesSSL;

@end

