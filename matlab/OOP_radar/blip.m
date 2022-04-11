classdef blip
    %UNTITLED2 Summary of this class goes here
    %   Detailed explanation goes here
    
    properties
        AoA
        range
        signal
    end
    
    methods
        function obj = blip(AoA, range, signal)
            if nargin == 3
                obj.AoA = AoA;
                obj.range = range;
                obj.signal = signal;
            end
        end
        function identify(obj)
            disp("I'm firendly and arriving at " + obj.AoA + " degree.");
        end
    end
    
end

