//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "MAMapViewDelegate.h"

@class MAMapView, NSArray, NSString, UIColor;

@interface KGRunMapView : UIView <MAMapViewDelegate>
{
    NSArray *_arrLocations;
    MAMapView *_mapView;
    CDUnknownBlockType _callBackImage;
    UIColor *_overlayColor;
}

@property(retain, nonatomic) UIColor *overlayColor; // @synthesize overlayColor=_overlayColor;
@property(copy, nonatomic) CDUnknownBlockType callBackImage; // @synthesize callBackImage=_callBackImage;
@property(retain, nonatomic) MAMapView *mapView; // @synthesize mapView=_mapView;
@property(retain, nonatomic) NSArray *arrLocations; // @synthesize arrLocations=_arrLocations;
- (void).cxx_destruct;
- (void)cleanMapView;
- (id)mapImage:(_Bool)arg1;
- (void)captureImageCallback:(CDUnknownBlockType)arg1;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (id)mapView:(id)arg1 rendererForOverlay:(id)arg2;
- (void)drawStartEndPoint;
- (void)drawAllMapLine;
- (id)initWithFrame:(struct CGRect)arg1 withOverlayColor:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
