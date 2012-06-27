/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "AVAssetInspector.h"


@interface AVFormatReaderInspector : AVAssetInspector {
	OpaqueFigFormatReader* _formatReader;
	BOOL didCheckForSaveRestriction;
	BOOL hasSaveRestriction;
}
@property(retain, nonatomic, getter=_formatReader, setter=_setFormatReader:) OpaqueFigFormatReader* formatReader;
-(id)initWithFormatReader:(OpaqueFigFormatReader*)formatReader;
// declared property getter: -(OpaqueFigFormatReader*)_formatReader;
-(BOOL)_hasQTSaveRestriction;
// declared property setter: -(void)_setFormatReader:(OpaqueFigFormatReader*)reader;
-(void*)_valueAsCFTypeForProperty:(CFStringRef)property;
-(id)alternateTrackGroups;
-(id)availableMetadataFormats;
-(id)commonMetadata;
-(void)dealloc;
-(XXStruct_pwHToB)duration;
-(void)finalize;
-(unsigned)hash;
-(BOOL)isComposable;
-(BOOL)isEqual:(id)equal;
-(BOOL)isExportable;
-(BOOL)isReadable;
-(id)lyrics;
-(id)metadataForFormat:(id)format;
-(CGSize)naturalSize;
-(int)naturalTimeScale;
-(float)preferredRate;
-(CGAffineTransform)preferredTransform;
-(float)preferredVolume;
-(BOOL)providesPreciseDurationAndTiming;
-(long)trackCount;
-(id)trackReferences;
@end

