//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "PBMessageObserverDelegate.h"

@interface WCMallNetworkHelper : MMObject <PBMessageObserverDelegate>
{
    id <WCMallNetworkHelperDelegate> m_oWCMallNetworkHelperDelegate;
}

@property(nonatomic) __weak id <WCMallNetworkHelperDelegate> m_oWCMallNetworkHelperDelegate; // @synthesize m_oWCMallNetworkHelperDelegate;
- (void).cxx_destruct;
- (void)OnGetWCMallPayChargeProxyReturn:(id)arg1 Event:(unsigned long)arg2;
- (void)OnGetWCMallLatestPayProductInfoMessageReturn:(id)arg1 Event:(unsigned long)arg2;
- (void)OnGetWCMallFunctionProductListMessageReturn:(id)arg1 Event:(unsigned long)arg2;
- (void)OnGetWCMallFunctionListMessageReturn:(id)arg1 Event:(unsigned long)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned long)arg2;
- (void)GetWCMallPayChargeProxyRequets:(id)arg1;
- (void)GetWCMallLatestPayProductInfo:(id)arg1;
- (void)GetWCMallFunctionProductList:(id)arg1;
- (void)GetWCMallFunctionList:(id)arg1;
- (void)dealloc;
- (id)init;

@end
