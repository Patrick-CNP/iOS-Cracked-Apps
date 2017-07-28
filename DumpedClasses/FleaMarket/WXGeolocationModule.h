//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CLLocationManagerDelegate.h"
#import "WXModuleProtocol.h"

@class CLLocation, CLLocationManager, NSDictionary, NSMutableDictionary, NSString, NSTimer, WXSDKInstance;

@interface WXGeolocationModule : NSObject <CLLocationManagerDelegate, WXModuleProtocol>
{
    _Bool _canQuery;
    _Bool _backgroundWatch;
    _Bool _locating;
    _Bool _beforeBackgroundLocating;
    CLLocationManager *_locationManager;
    CLLocation *_location;
    NSMutableDictionary *_locationObservers;
    NSTimer *_timer;
    NSMutableDictionary *_addressDic;
    NSDictionary *_extData;
}

+ (id)wx_export_method_40;
+ (id)wx_export_method_39;
+ (id)wx_export_method_38;
@property(nonatomic) _Bool beforeBackgroundLocating; // @synthesize beforeBackgroundLocating=_beforeBackgroundLocating;
@property(nonatomic) _Bool locating; // @synthesize locating=_locating;
@property(nonatomic) _Bool backgroundWatch; // @synthesize backgroundWatch=_backgroundWatch;
@property(retain, nonatomic) NSDictionary *extData; // @synthesize extData=_extData;
@property(retain, nonatomic) NSMutableDictionary *addressDic; // @synthesize addressDic=_addressDic;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) _Bool canQuery; // @synthesize canQuery=_canQuery;
@property(retain, nonatomic) NSMutableDictionary *locationObservers; // @synthesize locationObservers=_locationObservers;
@property(retain, nonatomic) CLLocation *location; // @synthesize location=_location;
@property(retain, nonatomic) CLLocationManager *locationManager; // @synthesize locationManager=_locationManager;
- (void).cxx_destruct;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)locationManager:(id)arg1 didUpdateToLocation:(id)arg2 fromLocation:(id)arg3;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)getAddress:(CDUnknownBlockType)arg1;
- (void)callbackObservers:(id)arg1 params:(id)arg2;
- (void)notifyObservers:(id)arg1 params:(id)arg2 error:(id)arg3;
- (void)locationManagerDidUpdate:(id)arg1 error:(id)arg2;
- (void)clearGeoAddressTimer;
- (id)formatLocationResponseDic:(id)arg1;
- (void)startLocating;
- (void)endLocating;
- (void)getCurrentPosition:(CDUnknownBlockType)arg1 error:(CDUnknownBlockType)arg2 params:(id)arg3;
- (void)registerlocationObserver:(CDUnknownBlockType)arg1 error:(CDUnknownBlockType)arg2 params:(id)arg3 watching:(_Bool)arg4;
- (void)watchPosition:(CDUnknownBlockType)arg1 error:(CDUnknownBlockType)arg2 params:(id)arg3;
- (void)clearWatch:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) __weak WXSDKInstance *weexInstance;

@end
