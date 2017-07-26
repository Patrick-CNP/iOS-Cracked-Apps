//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MKPolyline.h"

@class NSString, UIColor;

@interface VZFMapOverlay : MKPolyline
{
    NSString *_identifier;
    UIColor *_strokeColor;
    double _lineWidth;
}

+ (id)newWithOverlaySpecs:(const struct MapOverlaySpecs *)arg1;
@property(nonatomic) double lineWidth; // @synthesize lineWidth=_lineWidth;
@property(retain, nonatomic) UIColor *strokeColor; // @synthesize strokeColor=_strokeColor;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;

@end
