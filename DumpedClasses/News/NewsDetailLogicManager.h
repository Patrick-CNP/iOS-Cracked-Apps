//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIAlertViewDelegate.h"

@class NSString;

@interface NewsDetailLogicManager : NSObject <UIAlertViewDelegate>
{
}

+ (_Bool)shouldShowChangedNetworkTrafficAlertWhenClickShowOriginButtonInNoWifiNetwork;
+ (void)didClickShowOriginButtonOnceInNoWifiNetworkIfNotSetTTNetworkTrafficOptimum;
+ (void)trackEventCategory:(id)arg1 tag:(id)arg2 label:(id)arg3 value:(id)arg4 extValue:(id)arg5 fromGID:(id)arg6 adID:(id)arg7 params:(id)arg8 groupModel:(id)arg9;
+ (void)trackEventCategory:(id)arg1 tag:(id)arg2 label:(id)arg3 value:(id)arg4 extValue:(id)arg5 fromGID:(id)arg6 adID:(id)arg7 groupModel:(id)arg8;
+ (void)trackEventCategory:(id)arg1 tag:(id)arg2 label:(id)arg3 value:(id)arg4 extValue:(id)arg5 groupModel:(id)arg6;
+ (void)trackEventTag:(id)arg1 label:(id)arg2 value:(id)arg3 extValue:(id)arg4 adID:(id)arg5 groupModel:(id)arg6;
+ (void)trackEventTag:(id)arg1 label:(id)arg2 value:(id)arg3 extValue:(id)arg4 groupModel:(id)arg5;
+ (void)trackEventTag:(id)arg1 label:(id)arg2 value:(id)arg3 extValue:(id)arg4 fromID:(id)arg5 adID:(id)arg6 params:(id)arg7 groupModel:(id)arg8;
+ (void)trackEventTag:(id)arg1 label:(id)arg2 value:(id)arg3 extValue:(id)arg4 fromID:(id)arg5 params:(id)arg6 groupModel:(id)arg7;
+ (id)articleDetailEventLabelForSource:(int)arg1 categoryID:(id)arg2;
+ (int)fromSourceByString:(id)arg1;
+ (id)changegCooperationWapURL:(id)arg1;
+ (id)mainCategoryIDStr;
+ (id)shareInstance;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

