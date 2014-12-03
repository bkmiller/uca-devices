/**
 *
 * Copyright 2013-2014 UPnP Forum All rights reserved.
 * 
 * Redistribution and use in source and binary forms, with or without 
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 * this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 * this list of conditions and the following disclaimer in the documentation 
 * and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE FREEBSD PROJECT "AS IS" AND ANY EXPRESS OR 
 * IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE OR WARRANTIES OF 
 * NON-INFRINGEMENT, ARE DISCLAIMED. IN NO EVENT SHALL THE FREEBSD PROJECT OR 
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, 
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, 
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS;
 * OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR 
 * OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF 
 * ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * The views and conclusions contained in the software and documentation are 
 * those of the authors and should not be interpreted as representing official 
 * policies, either expressed or implied, by the UPnP Forum.
 *
 **/

#ifndef AVTSCDPTEMPLATE_H
#define AVTSCDPTEMPLATE_H

static const char *SCDP_TEMPLATE
    = "<?xml version=\"1.0\"?>"
      "<scpd xmlns=\"urn:schemas-upnp-org:service-1-0\">"
          "<specVersion>"
              "<major>1</major>"
              "<minor>0</minor>"
          "</specVersion>"
          "<actionList>"
              "<action>"
                  "<name>SetAVTransportURI</name>"
                  "<argumentList>"
                      "<argument>"
                          "<name>InstanceID</name>"
                          "<direction>in</direction>"
                          "<relatedStateVariable>A_ARG_TYPE_InstanceID</relatedStateVariable>"
                      "</argument>"
                      "<argument>"
                          "<name>CurrentURI</name>"
                          "<direction>in</direction>"
                          "<relatedStateVariable>AVTransportURI</relatedStateVariable>"
                      "</argument>"
                      "<argument>"
                          "<name>CurrentURIMetaData</name>"
                          "<direction>in</direction>"
                          "<relatedStateVariable>AVTransportURIMetaData</relatedStateVariable>"
                      "</argument>"
                  "</argumentList>"
              "</action>"
              "<action>"
                  "<name>SetNextAVTransportURI</name>"
                  "<argumentList>"
                      "<argument>"
                          "<name>InstanceID</name>"
                          "<direction>in</direction>"
                          "<relatedStateVariable>A_ARG_TYPE_InstanceID</relatedStateVariable>"
                      "</argument>"
                      "<argument>"
                          "<name>NextURI</name>"
                          "<direction>in</direction>"
                          "<relatedStateVariable>NextAVTransportURI</relatedStateVariable>"
                      "</argument>"
                      "<argument>"
                          "<name>NextURIMetaData</name>"
                          "<direction>in</direction>"
                          "<relatedStateVariable>NextAVTransportURIMetaData</relatedStateVariable>"
                      "</argument>"
                  "</argumentList>"
              "</action>"
              "<action>"
                  "<name>GetMediaInfo</name>"
                  "<argumentList>"
                      "<argument>"
                          "<name>InstanceID</name>"
                          "<direction>in</direction>"
                          "<relatedStateVariable>A_ARG_TYPE_InstanceID</relatedStateVariable>"
                      "</argument>"
                      "<argument>"
                          "<name>NrTracks</name>"
                          "<direction>out</direction>"
                          "<relatedStateVariable>NumberOfTracks</relatedStateVariable>"
                      "</argument>"
                      "<argument>"
                          "<name>MediaDuration</name>"
                          "<direction>out</direction>"
                          "<relatedStateVariable>CurrentMediaDuration</relatedStateVariable>"
                      "</argument>"
                      "<argument>"
                          "<name>CurrentURI</name>"
                          "<direction>out</direction>"
                          "<relatedStateVariable>AVTransportURI</relatedStateVariable>"
                      "</argument>"
                      "<argument>"
                          "<name>CurrentURIMetaData</name>"
                          "<direction>out</direction>"
                          "<relatedStateVariable>AVTransportURIMetaData</relatedStateVariable>"
                      "</argument>"
                      "<argument>"
                          "<name>NextURI</name>"
                          "<direction>out</direction>"
                          "<relatedStateVariable>NextAVTransportURI</relatedStateVariable>"
                      "</argument>"
                      "<argument>"
                          "<name>NextURIMetaData</name>"
                          "<direction>out</direction>"
                          "<relatedStateVariable>NextAVTransportURIMetaData</relatedStateVariable>"
                      "</argument>"
                      "<argument>"
                          "<name>PlayMedium</name>"
                          "<direction>out</direction>"
                          "<relatedStateVariable>PlaybackStorageMedium</relatedStateVariable>"
                      "</argument>"
                      "<argument>"
                          "<name>RecordMedium</name>"
                          "<direction>out</direction>"
                          "<relatedStateVariable>RecordStorageMedium</relatedStateVariable>"
                      "</argument>"
                      "<argument>"
                          "<name>WriteStatus</name>"
                          "<direction>out</direction>"
                          "<relatedStateVariable>RecordMediumWriteStatus</relatedStateVariable>"
                      "</argument>"
                  "</argumentList>"
              "</action>"
              "<action>"
                  "<name>GetTransportInfo</name>"
                  "<argumentList>"
                      "<argument>"
                          "<name>InstanceID</name>"
                          "<direction>in</direction>"
                          "<relatedStateVariable>A_ARG_TYPE_InstanceID</relatedStateVariable>"
                      "</argument>"
                      "<argument>"
                          "<name>CurrentTransportState</name>"
                          "<direction>out</direction>"
                          "<relatedStateVariable>TransportState</relatedStateVariable>"
                      "</argument>"
                      "<argument>"
                          "<name>CurrentTransportStatus</name>"
                          "<direction>out</direction>"
                          "<relatedStateVariable>TransportStatus</relatedStateVariable>"
                      "</argument>"
                      "<argument>"
                          "<name>CurrentSpeed</name>"
                          "<direction>out</direction>"
                          "<relatedStateVariable>TransportPlaySpeed</relatedStateVariable>"
                      "</argument>"
                  "</argumentList>"
              "</action>"
              "<action>"
                  "<name>GetPositionInfo</name>"
                  "<argumentList>"
                      "<argument>"
                          "<name>InstanceID</name>"
                          "<direction>in</direction>"
                          "<relatedStateVariable>A_ARG_TYPE_InstanceID</relatedStateVariable>"
                      "</argument>"
                      "<argument>"
                          "<name>Track</name>"
                          "<direction>out</direction>"
                          "<relatedStateVariable>CurrentTrack</relatedStateVariable>"
                      "</argument>"
                      "<argument>"
                          "<name>TrackDuration</name>"
                          "<direction>out</direction>"
                          "<relatedStateVariable>CurrentTrackDuration</relatedStateVariable>"
                      "</argument>"
                      "<argument>"
                          "<name>TrackMetaData</name>"
                          "<direction>out</direction>"
                          "<relatedStateVariable>CurrentTrackMetaData</relatedStateVariable>"
                      "</argument>"
                      "<argument>"
                          "<name>TrackURI</name>"
                          "<direction>out</direction>"
                          "<relatedStateVariable>CurrentTrackURI</relatedStateVariable>"
                      "</argument>"
                      "<argument>"
                          "<name>RelTime</name>"
                          "<direction>out</direction>"
                          "<relatedStateVariable>RelativeTimePosition</relatedStateVariable>"
                      "</argument>"
                      "<argument>"
                          "<name>AbsTime</name>"
                          "<direction>out</direction>"
                          "<relatedStateVariable>AbsoluteTimePosition</relatedStateVariable>"
                      "</argument>"
                      "<argument>"
                          "<name>RelCount</name>"
                          "<direction>out</direction>"
                          "<relatedStateVariable>RelativeCounterPosition</relatedStateVariable>"
                      "</argument>"
                      "<argument>"
                          "<name>AbsCount</name>"
                          "<direction>out</direction>"
                          "<relatedStateVariable>AbsoluteCounterPosition</relatedStateVariable>"
                      "</argument>"
                  "</argumentList>"
              "</action>"
              "<action>"
                  "<name>GetDeviceCapabilities</name>"
                  "<argumentList>"
                      "<argument>"
                          "<name>InstanceID</name>"
                          "<direction>in</direction>"
                          "<relatedStateVariable>A_ARG_TYPE_InstanceID</relatedStateVariable>"
                      "</argument>"
                      "<argument>"
                          "<name>PlayMedia</name> <direction>out</direction>"
                          "<relatedStateVariable>PossiblePlaybackStorageMedia</relatedStateVariable>"
                      "</argument>"
                      "<argument>"
                          "<name>RecMedia</name>"
                          "<direction>out</direction>"
                          "<relatedStateVariable>PossibleRecordStorageMedia</relatedStateVariable>"
                      "</argument>"
                      "<argument>"
                          "<name>RecQualityModes</name>"
                          "<direction>out</direction>"
                          "<relatedStateVariable>PossibleRecordQualityModes</relatedStateVariable>"
                      "</argument>"
                  "</argumentList>"
              "</action>"
              "<action>"
                  "<name>GetTransportSettings</name>"
                  "<argumentList>"
                      "<argument>"
                          "<name>InstanceID</name>"
                          "<direction>in</direction>"
                          "<relatedStateVariable>A_ARG_TYPE_InstanceID</relatedStateVariable>"
                      "</argument>"
                      "<argument>"
                          "<name>PlayMode</name>"
                          "<direction>out</direction>"
                          "<relatedStateVariable>CurrentPlayMode</relatedStateVariable>"
                      "</argument>"
                      "<argument>"
                          "<name>RecQualityMode</name>"
                          "<direction>out</direction>"
                       "<relatedStateVariable>CurrentRecordQualityMode</relatedStateVariable>"
                      "</argument>"
                  "</argumentList>"
              "</action>"
              "<action>"
                  "<name>Stop</name>"
                  "<argumentList>"
                      "<argument>"
                          "<name>InstanceID</name>"
                          "<direction>in</direction>"
                          "<relatedStateVariable>A_ARG_TYPE_InstanceID</relatedStateVariable>"
                      "</argument>"
                  "</argumentList>"
              "</action>"
              "<action>"
                  "<name>Play</name>"
                  "<argumentList>"
                      "<argument>"
                          "<name>InstanceID</name>"
                          "<direction>in</direction>"
                          "<relatedStateVariable>A_ARG_TYPE_InstanceID</relatedStateVariable>"
                      "</argument>"
                      "<argument>"
                          "<name>Speed</name>"
                          "<direction>in</direction>"
                          "<relatedStateVariable>TransportPlaySpeed</relatedStateVariable>"
                      "</argument>"
                  "</argumentList>"
              "</action>"
              "<action>"
                  "<name>Pause</name>"
                  "<argumentList>"
                      "<argument>"
                          "<name>InstanceID</name>"
                          "<direction>in</direction>"
                          "<relatedStateVariable>A_ARG_TYPE_InstanceID</relatedStateVariable>"
                      "</argument>"
                  "</argumentList>"
              "</action>"
              "<action>"
                  "<name>Seek</name>"
                  "<argumentList>"
                      "<argument>"
                          "<name>InstanceID</name>"
                          "<direction>in</direction>"
                          "<relatedStateVariable>A_ARG_TYPE_InstanceID</relatedStateVariable>"
                      "</argument>"
                      "<argument>"
                          "<name>Unit</name>"
                          "<direction>in</direction>"
                          "<relatedStateVariable>A_ARG_TYPE_SeekMode</relatedStateVariable>"
                      "</argument>"
                      "<argument>"
                          "<name>Target</name>"
                          "<direction>in</direction>"
                          "<relatedStateVariable>A_ARG_TYPE_SeekTarget</relatedStateVariable>"
                      "</argument>"
                  "</argumentList>"
              "</action>"
              "<action>"
                  "<name>Next</name>"
                  "<argumentList>"
                      "<argument>"
                          "<name>InstanceID</name>"
                          "<direction>in</direction>"
                          "<relatedStateVariable>A_ARG_TYPE_InstanceID</relatedStateVariable>"
                      "</argument>"
                  "</argumentList>"
              "</action>"
              "<action>"
                  "<name>Previous</name>"
                  "<argumentList>"
                      "<argument>"
                          "<name>InstanceID</name>"
                          "<direction>in</direction>"
                          "<relatedStateVariable>A_ARG_TYPE_InstanceID</relatedStateVariable>"
                      "</argument>"
                  "</argumentList>"
              "</action>"
          "</actionList>"
          "<serviceStateTable>"
              "<stateVariable sendEvents=\"no\">"
                  "<name>TransportState</name>"
                  "<dataType>string</dataType>"
                  "<allowedValueList>"
                      "<allowedValue>STOPPED</allowedValue>"
                      "<allowedValue>PAUSED_PLAYBACK</allowedValue>"
                      "<allowedValue>PLAYING</allowedValue>"
                      "<allowedValue>TRANSITIONING</allowedValue>"
                      "<allowedValue>NO_MEDIA_PRESENT</allowedValue>"
                  "</allowedValueList>"
              "</stateVariable>"
              "<stateVariable sendEvents=\"no\">"
                  "<name>TransportStatus</name>"
                  "<dataType>string</dataType>"
                  "<allowedValueList>"
                      "<allowedValue>OK</allowedValue>"
                      "<allowedValue>ERROR_OCCURRED</allowedValue>"
                  "</allowedValueList>"
              "</stateVariable>"
              "<stateVariable sendEvents=\"no\">"
                  "<name>PlaybackStorageMedium</name>"
                  "<dataType>string</dataType>"
                  "<allowedValueList>"
                      "<allowedValue>NETWORK</allowedValue>"
                  "</allowedValueList>"
              "</stateVariable>"
              "<stateVariable sendEvents=\"no\">"
                  "<name>RecordStorageMedium</name>"
                  "<dataType>string</dataType>"
                  "<allowedValueList>"
                      "<allowedValue>NOT_IMPLEMENTED</allowedValue>"
                  "</allowedValueList>"
              "</stateVariable>"
              "<stateVariable sendEvents=\"no\">"
                  "<name>PossiblePlaybackStorageMedia</name>"
                  "<dataType>string</dataType>"
              "</stateVariable>"
              "<stateVariable sendEvents=\"no\">"
                  "<name>PossibleRecordStorageMedia</name>"
                  "<dataType>string</dataType>"
              "</stateVariable>"
              "<stateVariable sendEvents=\"no\">"
                  "<name>CurrentPlayMode</name>"
                  "<dataType>string</dataType>"
                  "<defaultValue>NORMAL</defaultValue>"
                  "<allowedValueList>"
                      "<allowedValue>NORMAL</allowedValue>"
                      /* those are easy to implement extensions: */
                      //"<allowedValue>SHUFFLE</allowedValue>"
                      //"<allowedValue>REPEAT_ONE</allowedValue>"
                      //"<allowedValue>REPEAT_ALL</allowedValue>"
                      //"<allowedValue>RANDOM</allowedValue>"
                      //"<allowedValue>DIRECT_1</allowedValue>"
                      //"<allowedValue>INTRO</allowedValue>"
                  "</allowedValueList>"

              "</stateVariable>"
              "<stateVariable sendEvents=\"no\">"
                  "<name>TransportPlaySpeed</name>"
                  "<dataType>string</dataType>"
                  "<allowedValueList>"
                  "<allowedValue>1</allowedValue>"
                  "<allowedValue> vendor-defined </allowedValue>"
                  "</allowedValueList>"
              "</stateVariable>"
              "<stateVariable sendEvents=\"no\">"
                  "<name>RecordMediumWriteStatus</name>"
                  "<dataType>string</dataType>"
                  "<allowedValueList>"
                      "<allowedValue>NOT_IMPLEMENTED</allowedValue>"
                  "</allowedValueList>"
              "</stateVariable>"
              "<stateVariable sendEvents=\"no\">"
                  "<name>CurrentRecordQualityMode</name>"
                  "<dataType>string</dataType>"
                  "<allowedValueList>"
                      "<allowedValue>NOT_IMPLEMENTED</allowedValue>"
                  "</allowedValueList>"
              "</stateVariable>"
              "<stateVariable sendEvents=\"no\">"
                  "<name>PossibleRecordQualityModes</name>"
                  "<dataType>string</dataType>"
              "</stateVariable>"
              "<stateVariable sendEvents=\"no\">"
                  "<name>NumberOfTracks</name>"
                  "<dataType>ui4</dataType>"
                  "<allowedValueRange>"
                      "<minimum>0</minimum>"
                      "<maximum>$MAX_TRACK_NUMBER</maximum>"
                  "</allowedValueRange>"
              "</stateVariable>"
              "<stateVariable sendEvents=\"no\">"
                  "<name>CurrentTrack</name>"
                  "<dataType>ui4</dataType>"
                  "<allowedValueRange>"
                      "<minimum>0</minimum>"
                      "<maximum>$MAX_TRACK_NUMBER</maximum>"
                      "<step>1</step>"
                  "</allowedValueRange>"
              "</stateVariable>"
              "<stateVariable sendEvents=\"no\">"
                  "<name>CurrentTrackDuration</name>"
                  "<dataType>string</dataType>"
              "</stateVariable>"
              "<stateVariable sendEvents=\"no\">"
                  "<name>CurrentMediaDuration</name>"
                  "<dataType>string</dataType>"
              "</stateVariable>"
              "<stateVariable sendEvents=\"no\">"
                  "<name>CurrentTrackMetaData</name>"
                  "<dataType>string</dataType>"
              "</stateVariable>"
              "<stateVariable sendEvents=\"no\">"
                  "<name>CurrentTrackURI</name>"
                  "<dataType>string</dataType>"
              "</stateVariable>"
              "<stateVariable sendEvents=\"no\">"
                  "<name>AVTransportURI</name>"
                  "<dataType>string</dataType>"
              "</stateVariable>"
              "<stateVariable sendEvents=\"no\">"
                  "<name>AVTransportURIMetaData</name>"
                  "<dataType>string</dataType>"
              "</stateVariable>"
              "<stateVariable sendEvents=\"no\">"
                  "<name>NextAVTransportURI</name>"
                  "<dataType>string</dataType>"
              "</stateVariable>"
              "<stateVariable sendEvents=\"no\">"
                  "<name>NextAVTransportURIMetaData</name>"
                  "<dataType>string</dataType>"
              "</stateVariable>"
              "<stateVariable sendEvents=\"no\">"
                  "<name>RelativeTimePosition</name>"
                  "<dataType>string</dataType>"
              "</stateVariable>"
              "<stateVariable sendEvents=\"no\">"
                  "<name>AbsoluteTimePosition</name>"
                  "<dataType>string</dataType>"
              "</stateVariable>"
              "<stateVariable sendEvents=\"no\">"
                  "<name>RelativeCounterPosition</name>"
                  "<dataType>i4</dataType>"
              "</stateVariable>"
              "<stateVariable sendEvents=\"no\">"
                  "<name>AbsoluteCounterPosition</name>"
                  "<dataType>i4</dataType>"
              "</stateVariable>"
              "<stateVariable sendEvents=\"yes\">"
                  "<name>LastChange</name>"
                  "<dataType>string</dataType>"
              "</stateVariable>"
              "<stateVariable sendEvents=\"no\">"
                  "<name>A_ARG_TYPE_SeekMode</name>"
                  "<dataType>string</dataType>"
                  "<allowedValueList>"
                      "<allowedValue>TRACK_NR</allowedValue>"
                  "</allowedValueList>"
              "</stateVariable>"
              "<stateVariable sendEvents=\"no\">"
                  "<name>A_ARG_TYPE_SeekTarget</name>"
                  "<dataType>string</dataType>"
              "</stateVariable>"
              "<stateVariable sendEvents=\"no\">"
                  "<name>A_ARG_TYPE_InstanceID</name>"
                  "<dataType>ui4</dataType>"
              "</stateVariable>"
          "</serviceStateTable>"
      "</scpd>";

#endif // AVTSCDPTEMPLATE_H